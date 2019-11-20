#include <Wire.h> // Import the I2C library
#define SLAVE_ADDRESS 0x04 // Define port used to communicate between Arduino and EV3 

int s2; // Variable used to send data to EV3
int s3; // Variable used to receive data from EV3

void setup()
{
    Wire.begin(SLAVE_ADDRESS); // Set the pin of I2C
    Wire.onReceive(readData); // When receive the data, read using I2C
    Wire.onRequest(sendData); // When send the data, send using I2C
}

void sendData()
{
  Wire.write(s3); // Send data to EV3
}

void readData()
{
    while(Wire.available()>0) // Verify if the Arduino is connected to EV3
    {
      int s2 = Wire.read(); // Read data sent by EV3
    }
}

