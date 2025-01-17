# EV3 and Arduino
  A simple tutorial of how to communicate between the Arduino and the EV3, using I2C.
  
 ### Requeriments
  - Arduino.
  - EV3.
  - EV3 Cable.
  - 2x - 40kΩ Resistor Pull-Up (Optional, if the a communication was with problems, use the resistors!).
 
## EV3 and Arduino Pinout
 ![EV3andArduino](https://32414320wji53mwwch1u68ce-wpengine.netdna-ssl.com/wp-content/uploads/2014/05/Arduino-and-NXT-Schematic1-1024x480.png)
  - Analog - White.
  - Ground - Black.
  - Ground - Red.
  - Vin - Green.
  - I2C Clock - Yellow.
  - I2C Data - Blue.
  
## Library used:

  - Wire: This library is used to do the communication using the I2C.

```
#include <Wire.h> 
#define SLAVE_ADDRESS 0x04 

void setup()
{
    Wire.begin(SLAVE_ADDRESS); 
    Wire.onReceive(readData); 
    Wire.onRequest(sendData); 
}
```

## Send 1 byte to EV3
  - `Wire.write();`: Send the byte.
### Example:
```
void sendData()
{
  int s2 = 1;
  Wire.write(s2);
}
```

## Send 8 bytes to EV3
  - `Wire.write();`: Send the bytes.
### Example:
```
void sendData()
{
  uint8_t s2[8] = {"1","2","3","4","5","6","7","8"};
  Wire.write(s2,8);
}
```

## Read 1 byte on Arduino
  - `Wire.read();`: Receive the byte.
### Example:
```
void readData()
{
    while(Wire.available()>0)
    {
      s2 = Wire.read();
    }
}
```

## Read 8 bytes on Arduino
  - `Wire.read();`: Receive the bytes.
### Example:
```
void readData()
{
    while(Wire.available()>0)
    {
      s2 = Wire.read();
      for (int i = 0; i < 7; i++) {
        Wire.read();
      }
    }
}
```

## Address

 - The address sent to Arduino is `0x04` or 4

## Read 1 byte on EV3
 ![EV3andArduino](https://raw.githubusercontent.com/alissonsilvajs/EV3andArduino/master/images/read1byte.png)
 
## Read 8 bytes on EV3
![EV3andArduino](https://raw.githubusercontent.com/alissonsilvajs/EV3andArduino/master/images/read8bytes.jpeg)
 
## Send 1 byte to Arduino
 ![EV3andArduino](https://raw.githubusercontent.com/alissonsilvajs/EV3andArduino/master/images/write1byte.png)
 
## Send 8 bytes to Arduino
 ![EV3andArduino](https://raw.githubusercontent.com/alissonsilvajs/EV3andArduino/master/images/write8bytes.jpeg)

## Read Analog Pin on EV3
 ![EV3andArduino](https://raw.githubusercontent.com/alissonsilvajs/EV3andArduino/master/images/analogread.jpeg)
 
## Send Digital Write to Arduino on EV3
 ![EV3andArduino](https://raw.githubusercontent.com/alissonsilvajs/EV3andArduino/master/images/analogread.jpeg)

## Credits
 - [Alisson Silva](https://github.com/alissonsilvajs)
