#include <mcp_can.h>  // Include the CAN library
#include <SPI.h>      // Include the SPI library
#include <stdio.h>    // Include the standard I/O library
#define INT8U unsigned char  // Define INT8U as an unsigned char

// Declare variables for CAN message IDs and data buffers
unsigned char rxId;
unsigned char rxId1;

INT8U len = 0;  // Length of the received message
INT8U rxBuf[8];  // Buffer to store received data
INT8U rxBuf1[8];  // Another buffer to store received data
int value_0;
int value_1;
int value_2;
int value_3;
int value_4;
int value_5;
int value_6;
int value_7;

const int SPI_CS_PIN = 10;  // Define the SPI chip select pin
MCP_CAN CAN(SPI_CS_PIN);  // Create a CAN object with the CS pin

void setup()
{
  Serial.begin(9600);  // Initialize serial communication at 9600 baud rate

  // Initialize the CAN bus at 500 kbps
  while (CAN_OK != CAN.begin(CAN_500KBPS))   
  {
    Serial.println("CAN BUS Shield init fail!!!");
    Serial.println("Init CAN BUS Shield again...");
    delay(100);  // Wait for 100 milliseconds before retrying
  }

  Serial.println("CAN BUS Initialisation Successful");
}

void loop()
{
  // Check if a CAN message is available
  while (CAN_MSGAVAIL == CAN.checkReceive())
  {
    CAN.readMsgBuf(&len, rxBuf);  // Read the CAN message into rxBuf

    // Read data: len = data length, buf = data byte(s)
    rxId = CAN.getCanId();  // Get the message ID

    // Store the received data into variables
    value_0 = rxBuf[0]; value_1 = rxBuf[1]; value_2 = rxBuf[2]; value_3 = rxBuf[3]; 
    value_4 = rxBuf[4]; value_5 = rxBuf[5]; value_6 = rxBuf[6]; value_7 = rxBuf[7];

    // Print the received data to the serial monitor
    Serial.print(value_0); Serial.print("\t"); 
    Serial.print(value_1); Serial.print("\t");
    Serial.print(value_2); Serial.print("\t");
    Serial.print(value_3); Serial.print("\t");
    Serial.print(value_4); Serial.print("\t");
    Serial.print(value_5); Serial.print("\t");
    Serial.print(value_6); Serial.print("\t");
    Serial.print(value_7); Serial.print("\t");
    Serial.println();

    delay(100);  // Wait for 100 milliseconds

    CAN.readMsgBuf(&len, rxBuf1);  // Read another CAN message into rxBuf1
    rxId1 = CAN.getCanId();  // Get the message ID

    // Store the received data into variables
    value_0 = rxBuf1[0]; value_1 = rxBuf1[1]; value_2 = rxBuf1[2]; value_3 = rxBuf1[3]; 
    value_4 = rxBuf1[4]; value_5 = rxBuf1[5]; value_6 = rxBuf1[6]; value_7 = rxBuf1[7];

    // Print the received data to the serial monitor
    Serial.print(value_0); Serial.print("\t"); 
    Serial.print(value_1); Serial.print("\t");
    Serial.print(value_2); Serial.print("\t");
    Serial.print(value_3); Serial.print("\t");
    Serial.print(value_4); Serial.print("\t");
    Serial.print(value_5); Serial.print("\t");
    Serial.print(value_6); Serial.print("\t");
    Serial.print(value_7); Serial.print("\t");

    Serial.println();
    delay(100);  // Wait for 100 milliseconds
  }
}
