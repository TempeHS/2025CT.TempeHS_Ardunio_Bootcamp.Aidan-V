/*
  Author: Aidan Vu 14/08/2024
  
  Learning Intention:
  The students will understand the difference between the inbuilt setup and loop methods,
  and understand the basics of the serial monitor'.
  
  Success Criteria:
    1.  I understand the different behaviours of the setup and loop methods
    2.  I can print information to the serial monitor
    3.  I can print information to a new line of the serial monitor
    4.  I understand the impact of having more than one setup or loop methods in my sketch
    5.  I understand `//` and `\/* *\/` comments 
  
  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/communication/serial/
    https://docs.arduino.cc/software/ide-v2/tutorials/ide-v2-serial-plotter
*/

// The setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  Serial.print("Serial Monitor debug");
}

// The loop function runs over and over again forever
void loop() {
  Serial.print("Pin-A0:");
  Serial.print(analogRead(A0));
  Serial.print(",");
  Serial.print("Pin-A1:");
  Serial.print(analogRead(A1));
  Serial.print(",");
  Serial.print("Pin-A2:");
  Serial.print(analogRead(A2));
  Serial.print(",");
  Serial.print("Pin-A3:");
  Serial.print(analogRead(A3));
  Serial.print(",");
  Serial.print("Pin-A4:");
  Serial.print(analogRead(A4));
  Serial.print(",");
  Serial.print("Pin-A5:");
  Serial.println(analogRead(A5));
}


