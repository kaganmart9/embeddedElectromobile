#include <mcp_can.h>
#include <SPI.h>

/*SAMD core*/
#ifdef ARDUINO_SAMD_VARIANT_COMPLIANCE
  #define SERIAL SerialUSB
#else
  #define SERIAL Serial 
#endif

const int SPI_CS_PIN = 20;
MCP_CAN CAN(SPI_CS_PIN);  


void setup()
{
    SERIAL.begin(9600);


    while (CAN_OK != CAN.begin(CAN_500KBPS))              // init can bus : baudrate = 500k
    {
        SERIAL.println("CAN BUS Shield init fail");
        SERIAL.println(" Init CAN BUS Shield again");
        delay(100);
        
    }
    
    SERIAL.println("CAN BUS Shield init ok!");
}

void loop()
{


 unsigned char msg[8] = {9, 10, 11, 12, 13, 14 , 15, 16};
 unsigned char msg1[8] = {1,2,3,4,5,6,7,8};


Serial.println(msg[0]);

                 
    // send data:  id = 0x00, standrad frame, data len = 8, stmp: data buf
    
    CAN.sendMsgBuf(0x012, 0, 8, msg);

delay(100);
    
    CAN.sendMsgBuf(0x011, 0, 8, msg1);
    
    delay(100);                       // send data per 100ms
}

// END FILE
