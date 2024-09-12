# Arduino CAN Bus Projects

This repository contains two Arduino projects that demonstrate how to use the MCP_CAN library to communicate over a CAN bus. Each project includes detailed comments to help you understand the code.

## Project 1: CAN Bus Data Receiver

This project initializes a CAN bus at 500 kbps and reads messages from the bus, displaying the data on the serial monitor.

### Features

- Initializes CAN bus at 500 kbps
- Reads CAN messages
- Displays message data on the serial monitor

### Usage

1. Open the `receiverCode.ino` file in the Arduino IDE.
2. Connect your CAN bus shield to the Arduino.
3. Upload the code to your Arduino board.
4. Open the serial monitor to see the received CAN messages.

## Project 2: CAN Bus Data Sender

This project initializes a CAN bus at 500 kbps and sends predefined messages over the bus.

### Features

- Initializes CAN bus at 500 kbps
- Sends predefined CAN messages

### Usage

1. Open the `transmitterCode.ino` file in the Arduino IDE.
2. Connect your CAN bus shield to the Arduino.
3. Upload the code to your Arduino board.
4. The predefined messages will be sent over the CAN bus every 100 milliseconds.

## Getting Started

### Prerequisites

- Arduino IDE
- MCP_CAN library
- SPI library

## Acknowledgments

- MCP_CAN Library
- Arduino
