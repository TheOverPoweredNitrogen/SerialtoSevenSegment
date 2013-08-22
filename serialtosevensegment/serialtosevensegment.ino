//OverPoweredNitrogen
//Based on: http://www.hacktronics.com/Tutorials/arduino-and-7-segment-led.html
//I also used some of their images.
// License: http://www.opensource.org/licenses/mit-license.php (Go crazy)
int incomingByte;      // a variable to read incoming serial data into

void setup() {
  // initialize serial communication:
  Serial.begin(9600);

  pinMode(2, OUTPUT);  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(9, 0);  // start with the "dot" off

}

void loop() {
  // see if there's incoming serial data:
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    // if it's a capital H (ASCII 72), turn on the LED:
    if (incomingByte == '0') {
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, 1);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, 1);
      digitalWrite(8, 0);
      digitalWrite(9,0);


    }
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == '1') {
      digitalWrite(2, 0);
      digitalWrite(3, 1);
      digitalWrite(4, 1);
      digitalWrite(5, 0);
      digitalWrite(6, 0);
      digitalWrite(7, 0);
      digitalWrite(8, 0);
      digitalWrite(9,0);

    }
    if (incomingByte == '2') {
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, 0);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, 0);
      digitalWrite(8, 1);
      digitalWrite(9,0);
    }
    if (incomingByte == '3') {
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, 1);
      digitalWrite(5, 1);
      digitalWrite(6, 0);
      digitalWrite(7, 0);
      digitalWrite(8, 1);
      digitalWrite(9,0);
    }
    if (incomingByte == '4') {
      digitalWrite(2, 0);
      digitalWrite(3, 1);
      digitalWrite(4, 1);
      digitalWrite(5, 0);
      digitalWrite(6, 0);
      digitalWrite(7, 1);
      digitalWrite(8, 1);
      digitalWrite(9,0);
    }
    if (incomingByte == '5') {
      digitalWrite(2, 1);
      digitalWrite(3, 0);
      digitalWrite(4, 1);
      digitalWrite(5, 1);
      digitalWrite(6, 0);
      digitalWrite(7, 1);
      digitalWrite(8, 1);
      digitalWrite(9,0);
    }
    if (incomingByte == '6') {
      digitalWrite(2, 1);
      digitalWrite(3, 0);
      digitalWrite(4, 1);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, 1);
      digitalWrite(8, 1);
      digitalWrite(9,0);
    }
    if (incomingByte == '7') {
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, 1);
      digitalWrite(5, 0);
      digitalWrite(6, 0);
      digitalWrite(7, 0);
      digitalWrite(8, 0);
      digitalWrite(9,0);
    }
    if (incomingByte == '8') {
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, 1);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, 1);
      digitalWrite(8, 1);
      digitalWrite(9,0);
    }
    if (incomingByte == '9') {
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, 1);
      digitalWrite(5, 0);
      digitalWrite(6, 0);
      digitalWrite(7, 1);
      digitalWrite(8, 1);
      digitalWrite(9,0);
    }
    //Over 10
    if (incomingByte == 'H') {
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, 1);
      digitalWrite(5, 0);
      digitalWrite(6, 0);
      digitalWrite(7, 1);
      digitalWrite(8, 1);
      digitalWrite(9,1);
    }
    //Off
    if (incomingByte == 'O') {
      digitalWrite(2, 1);
      digitalWrite(3, 0);
      digitalWrite(4, 0);
      digitalWrite(5, 0);
      digitalWrite(6, 0);
      digitalWrite(7, 0);
      digitalWrite(8, 0);
      digitalWrite(9,0);
    }
  }
}

