/*
  AnalogReadSerial_NO_DataLog

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This code is based on public doamin found here =>  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/

float Value;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int Value = analogRead(A0);
  // print out the value you read:
  Serial.println(Value);
  delay(250);        // delay in between reads for stability
}
