# ArduinoProject

A custom Arduino clock project built with C++ for an Arduino Uno.

This project uses a real-time clock module, LED matrix display, sound detection, interrupts, and custom 5x7 bitmap fonts to display the current time and trigger a message when sound is detected.

## Features

- Arduino Uno clock project
- Real-time clock support using an RTC module
- MAX7219 LED matrix display control
- Custom 5x7 digit and letter rendering
- Interrupt-based sound detection
- Timezone and daylight saving time handling
- Displays hours, minutes, and seconds
- Shows a message when sound is detected
- Low-level display column control

## Tech Stack

- C++
- Arduino
- Arduino Uno
- RTC DS3231
- MAX7219 LED matrix display
- LedControl library
- Wire/I2C
- Timezone library
- Sound detector module
