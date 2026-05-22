#include <stdio.h>
#define BOOL DANFOSS_BOOL 
#include "70493872.h"
#undef BOOL
extern void MAINMODULE_RunOnce(void);

// Display

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <fcntl.h>

#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/spi/spidev.h>



#define SPI_DEVICE "/dev/spidev0.0"

// MAX7219 registers
#define REG_NOOP        0x00
#define REG_DIGIT0      0x01
#define REG_DIGIT1      0x02
#define REG_DIGIT2      0x03
#define REG_DIGIT3      0x04
#define REG_DIGIT4      0x05
#define REG_DIGIT5      0x06
#define REG_DIGIT6      0x07
#define REG_DIGIT7      0x08
#define REG_DECODE_MODE 0x09
#define REG_INTENSITY   0x0A
#define REG_SCAN_LIMIT  0x0B
#define REG_SHUTDOWN    0x0C
#define REG_DISPLAYTEST 0x0F

#define NUM_MODULES 4

static int spi_fd;

void max7219_send(uint8_t reg, uint8_t data) {
    uint8_t tx[NUM_MODULES * 2];

    for (int i = 0; i < NUM_MODULES; i++) {
        tx[i * 2] = reg;
        tx[i * 2 + 1] = data;
    }

    struct spi_ioc_transfer tr = {
        .tx_buf = (unsigned long)tx,
        .rx_buf = 0,
        .len = sizeof(tx),
        .speed_hz = 1000000,
        .bits_per_word = 8,
    };

    if (ioctl(spi_fd, SPI_IOC_MESSAGE(1), &tr) < 1) {
        perror("SPI_IOC_MESSAGE");
        exit(1);
    }
}

void max7219_send_to_module(int module, uint8_t reg, uint8_t data) {
    uint8_t tx[NUM_MODULES * 2];

    for (int i = 0; i < NUM_MODULES; i++) {
        tx[i * 2] = REG_NOOP;
        tx[i * 2 + 1] = 0x00;
    }

    // module 0 is the first module in the SPI chain.
    // If the dot appears on the wrong module, try NUM_MODULES - 1 - module.
    int index = NUM_MODULES - 1 - module;

    tx[index * 2] = reg;
    tx[index * 2 + 1] = data;

    struct spi_ioc_transfer tr = {
        .tx_buf = (unsigned long)tx,
        .rx_buf = 0,
        .len = sizeof(tx),
        .speed_hz = 1000000,
        .bits_per_word = 8,
    };

    if (ioctl(spi_fd, SPI_IOC_MESSAGE(1), &tr) < 1) {
        perror("SPI_IOC_MESSAGE");
        exit(1);
    }
}

void max7219_init(void) {
    max7219_send(REG_DISPLAYTEST, 0x00); // display test off
    max7219_send(REG_DECODE_MODE, 0x00); // no BCD decode
    max7219_send(REG_SCAN_LIMIT, 0x07);  // use all 8 rows
    max7219_send(REG_INTENSITY, 0x01);   // brightness low: 0x00 to 0x0F
    max7219_send(REG_SHUTDOWN, 0x01);    // normal operation

    // clear all rows
    for (uint8_t row = 1; row <= 8; row++) {
        max7219_send(row, 0x00);
    }
}

void clear_display(void) {
    for (uint8_t row = 1; row <= 8; row++) {
        max7219_send(row, 0x00);
    }
}

void set_one_dot(int module, int x, int y) {
    if (module < 0 || module >= NUM_MODULES || x < 0 || x > 7 || y < 0 || y > 7) {
        fprintf(stderr, "Invalid dot position\n");
        return;
    }

    uint8_t row_register = REG_DIGIT0 + y;
    uint8_t column_bit = 1 << x;

    max7219_send_to_module(module, row_register, column_bit);
}



//typedef void (*IO_Sync_Func)(void* var, int id);


void sync_digital_in(void* var, int gpio) {
    *(BOOL*)var = read_linux_gpio(gpio); 
}

void sync_spi_led(void* var, int module) {
    // SPI?
    DANFOSS_BOOL current_val = *(DANFOSS_BOOL*)var;
    
    //Change later to CAN bus.
    if (current_val == 1) {
        set_one_dot(module, 0, 0);
    } else {
        clear_display();
    }
}


IO_Mapping my_IO[] = {
    { &C1p09.DigIn,       24, sync_digital_in, 0 }, 
    { &LED.RedBrightness,  0, sync_spi_led,    0 }  
};

#define NUM_IO (sizeof(my_IO) / sizeof(my_IO[0]))

void run_sync() {
   for (int i = 0; i < NUM_IO; i++) {
        my_IO[i].func(my_IO[i].danfoss_var, my_IO[i].hw_id);
    }
}




int read_linux_gpio(int pin) {
    char path[64];
    char value_str[3];
    int fd;

  
    snprintf(path, sizeof(path), "/sys/class/gpio/gpio%d/value", pin); 

    fd = open(path, O_RDONLY); 
    if (fd < 0) {
        return 0;
    }

    if (read(fd, value_str, 3) < 1) {
        close(fd);
        return 0;
    }

    close(fd);
    return (value_str[0] == '1'); 
}
*/



int main() {
    
     spi_fd = open(SPI_DEVICE, O_RDWR);
    if (spi_fd < 0) {
        perror("open SPI device");
        return 1;
    }

    uint8_t mode = SPI_MODE_0;
    uint8_t bits = 8;
    uint32_t speed = 1000000;

    ioctl(spi_fd, SPI_IOC_WR_MODE, &mode);
    ioctl(spi_fd, SPI_IOC_WR_BITS_PER_WORD, &bits);
    ioctl(spi_fd, SPI_IOC_WR_MAX_SPEED_HZ, &speed);

    max7219_init();
    clear_display();

    run_sync();
    MAINMODULE_RunOnce(); // actual GUIDE code
    // Light one dot:
    // Screen: 0 to 3
    // x = 0 to 7
    // y= 0 to 7
    run_sync();
    /*if(LED.RedBrightness == 1) {
    set_one_dot(0, 0, 0);
    }*/
    sleep(20);

    clear_display();
    close(spi_fd);
  
    return 0;
}

/*
CAN Bus Protocol Tutorial gives an overview of the ISO 11898-1 and ISO 11898-2 controller area network standards
*/