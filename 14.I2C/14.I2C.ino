/*
  Author: 
  Learning Intention:
  The students will learn to use the I2C communication protocol to send and receive
  data with 2IC sensors and actuators

  Success Criteria:
    1.  I understand that I2C is a communication protocol
    2.  I understand that each I2C needs it's own I2C Channel
    3.  I understand that communicating to I2C modules is similar to the serial monitor
    4.  I understand I need to include the `wire-h` library
    5.  I understand that I need to look at the documentation and example code for each I2C module
    6.  I can sucessfully send data to the I2C OLED display
    7.  I can successfully receive data from either Temperature & Humidity Sensor, Air pressure Sensor or Acceleration Sensor in the sensor kit.

  Student Notes:
    
  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/communication/wire/


  Examples:
    OLED: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/Sensor%20Kit/0.96_OLED_Display/0.96_OLED_Display.ino
    3 Axis: Acceleromter: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/Sensor%20Kit/3_Axis_Accel_Sensor/3_Axis_Accel_Sensor.ino
    Temperature & Humidity: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/Sensor%20Kit/Temp_and_Humid_Sensor/Temp_and_Humid_Sensor.ino
    Air Pressure Sensor: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/Sensor%20Kit/Air_Pressure_Sensor/Air_Pressure_Sensor.ino
*/

#include "Arduino_SensorKit.h"
 
unsigned int x = 120;
unsigned int y = 120;
 
void setup()
{
  Oled.begin();
  Oled.setFlipMode(true);
  Serial.begin(9600);
  Accelerometer.begin();
}
 
void loop()
{
 while (!gameOver())
 {
    Oled.setFont(u8x8_font_chroma48medium8_r);   // choose a suitable font
    Oled.setCursor(x, y);
    Oled.print("O");    // write something to the internal memory
    delay(100);
   
 
 
  Serial.print("x:");
  Serial.print(Accelerometer.readX());
  Serial.print("  ");
  Serial.print("y:");
  Serial.print(Accelerometer.readY());        
  Serial.print("  ");
  Serial.print("z:");
  Serial.println(Accelerometer.readZ());
 
  delay(500);
 }
}
