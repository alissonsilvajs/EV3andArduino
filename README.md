# EV3andArduino
  💬 Tutorial of how to communicate between Arduino and EV3
## EV3 and Arduino Pinout
 ![EV3andArduino](https://32414320wji53mwwch1u68ce-wpengine.netdna-ssl.com/wp-content/uploads/2014/05/Arduino-and-NXT-Schematic1-1024x480.png)
  - Analog - White
  - Ground - Black
  - Ground - Red
  - Vin - Green
  - I2C Clock - Yellow
  - I2C Data - Blue
  
## Send 1 byte to EV3
  - `Wire.write();`: safdasda
### Example:
```
void sendData()
{
  int s2 = 1
  Wire.write(s2);
}
```

## Read 1 byte from EV3
  - `Wire.read();`: dasdad
### Example:
```
void readData()
{
    while(Wire.available()>0)
    {
      int s2 = Wire.read();
    }
}
```

## Read 8 bytes from EV3
  - `Wire.read();`: dasdad
### Example:
```
void readData()
{
    while(Wire.available()>0)
    {
      int s2 = Wire.read();
      for (int i = 0; i = 7; i++) {
        Wire.read();
      }
    }
}
```
