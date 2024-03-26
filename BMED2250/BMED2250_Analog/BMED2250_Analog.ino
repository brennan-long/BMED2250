/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  //int sensorValue = analogRead(A0);
  // print out the value you read:
  //Serial.println(sensorValue);
  //delay(1);  // delay in between reads for stability

  int i = 0;
  int sensorValue = -1;
  int analogArray[120];
  int averageTotal;
  for(int i = 0; i < 120; i++) {
    sensorValue = analogRead(A0);
    analogArray[i] = sensorValue;
    delay(1000);
    Serial.println(sensorValue);
    averageTotal += sensorValue;
  }
  int averageAfter = averageTotal / 120;
  Serial.println("The average for the last 2 minutes was: " + averageAfter);
  
}

