#include <Wire.h> 
#define SLAVE_ADDRESS 0x04 

int s2;
int s3;

void setup()
{
    Wire.begin(SLAVE_ADDRESS); 
    Wire.onReceive(receiveData); 
    Wire.onRequest(sendData); 
}

void sendData()
{
  int se = 1
  Wire.write(se);
}

void receiveData()
{
    while(Wire.available()>0)
    {
      int s2 = Wire.read();
    }
}
