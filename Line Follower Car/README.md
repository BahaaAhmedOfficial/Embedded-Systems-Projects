# Line Follower System Using AVR Microcontroller

## Overview
This project demonstrates a motor control system using an AVR microcontroller, developed in C, and simulated using Proteus Design Suite. The code implements a motor driver that allows forward, reverse, left, and right movements based on digital input signals. The system uses PWM (Pulse Width Modulation) to control motor speed.

## Features
### Motor Movement Modes:
- Forward
- Reverse
- Left Turn
- Right Turn
- Stop

### PWM-Based Speed Control:
- 10-bit PWM resolution for precise motor speed adjustment.

### Proteus Simulation:
- Simulates hardware connections and motor control in a virtual environment.

## Project Structure
### Codebase
- **main.c**: The main program controlling motor behavior based on input signals.
- **LIB**: Utility files providing common macros and data types:
  - **BIT_MATH.h** (Bitwise operations)
  - **STD_TYPE.h** (Standard type definitions)
- **MCAL**: Low-level drivers for microcontroller hardware abstraction:
  - **DIO** (Digital Input/Output Control)
  - **TIM1** (Timer1 for PWM generation)
- **HAL**: High-level abstraction for the motor driver:
  - **MOTOR_interface.c** (Motor control logic)

### Hardware Design
#### Inputs:
- Digital signals on PORTA Pin 0 and Pin 1 to determine motor actions.

#### Outputs:
- PWM signals for motor speed and direction control.

#### Connections:
- Two DC motors are connected to the microcontroller via an H-bridge circuit.
- OC1A and OC1B pins are used for PWM generation.

## How It Works
### Input Signals:
- **PORTA Pin 0 and Pin 1** determine the motor's behavior:
  - Both LOW: Move forward.
  - Pin 0 HIGH, Pin 1 LOW: Move right.
  - Pin 0 LOW, Pin 1 HIGH: Move left.
  - Both HIGH: Stop the motors.

### PWM Speed Control:
- Adjust the duty cycle in the PWM configuration to control motor speed dynamically.

### Proteus Simulation:
- The simulation demonstrates motor operations visually and helps validate the system before deployment.

## Simulation Setup
### Tools:
- **Proteus Design Suite** for circuit simulation.
- **AVR Studio/IDE** for code compilation and flashing.

### Simulation Diagram:
- Includes an AVR microcontroller, an H-bridge motor driver, and DC motors.
- Digital switches for input control and virtual oscilloscope for PWM signal monitoring.
