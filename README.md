# Electronic-Piano
 Design and build a digital piano using an Arduino MCU

## Overview

Designed and implemented a digital piano system using an Arduino Uno microcontroller, push-button inputs, and a buzzer output module. The project focused on basic circuit interfacing, digital input processing, and audio signal generation using embedded systems programming.

The piano consists of seven input keys corresponding to musical notes (C, D, E, F, G, A, and B). When a key is pressed, the Arduino generates a square-wave signal at the corresponding frequency to produce the musical tone through the buzzer.

## Demo

Click the image above to watch the demo video!

<p align="center">
  <a href="https://drive.google.com/file/d/1dEsFdvUNxq7czSPp4Ksm2Lqd608b1Mo4/view?usp=drive_link">
    <img src="images/demo.png" width="700">
  </a>
</p>

## Key Features
-digital input handling
-frequency generation
-buzzer control
-waveform timing
-embedded programming
-simple circuit interfacing
## Hardware Used
- Arduino Uno Microcontroller
- Breadboard Prototyping Circuit
- Push Buttons (Piano Keys)
- Piezo Buzzer
- Resistors
- Jumper Wires

## Hardware Setup

<p align="center">
<img width="513" height="390" alt="image" src="https://github.com/user-attachments/assets/9cc97558-ebee-4b3e-a517-28861e08a55a" />
</p>


## Source Code

Use pin 3 as the output to the buzzer. Connect pin 3 to a buzzer.
Pin 2 and pins Analog0 to Analog5 are used as the inputs from the keyboard. 
The keyboard is composed of several keys (switches). 
<p align="center">
<img width="517" height="500" alt="image" src="https://github.com/user-attachments/assets/33b096f1-9f8b-457e-9f40-0b59776c5fc2" />
</p>

The complete embedded control program is available in the `src/` directory.

## Technologies Used

- C++ / Arduino Programming
- Embedded Systems Programming
- Digital Input Processing
- Frequency-Based Audio Signal Generation
- Square-Wave Signal Generation
- Basic Circuit Design
