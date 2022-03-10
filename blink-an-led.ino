// ------------
// Blink an LED
// ------------
//int led1 = D0; // Instead of writing D0 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.

int led2 = D7; // Instead of writing D7 over and over again, we'll write led2
// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.

void setup() {

//  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

void loop() {
  // To blink the LED, turn on with High turn off with LOW
  
  
  // B  -...    3 + 1 + 1 + 1 time units
  digitalWrite(led2, HIGH);
//  digitalWrite(led1, HIGH);
  delay(900);
  //digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(300);
//  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(300);
//  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(300);
//  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(300);
 // digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(300);
 // digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(300);
 // digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
   // E  .    1 time unit
 // digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(300);
 // digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  
  // N -. 3 + 1 time units
 // digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(900);
 // digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(300);
 // digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(300);
 // digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(5000);



}

