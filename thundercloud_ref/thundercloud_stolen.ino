/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int set1 = 13;
int set2 = 12;
int set3 = 11;
int set4 = 10;
int set5 = 9;
int control1=30;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(set1, OUTPUT); 
  pinMode(set2, OUTPUT);
  pinMode(set3, OUTPUT);  
  pinMode(control1, INPUT_PULLUP);
  
}

// the loop routine runs over and over again forever:
void loop() {
  //test
  digitalWrite(set1, HIGH);
  digitalWrite(set2, HIGH);
  digitalWrite(set3, HIGH);
  digitalWrite(set4, HIGH);
  digitalWrite(set5, HIGH);
  
  /*
  if((digitalRead(control1)) == LOW){
 
  digitalWrite(set1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(400);               // wait for a second
  digitalWrite(set1, LOW);    // turn the LED off by making the voltage LOW
  delay(50);               // wait for a second
 
    digitalWrite(set1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);               // wait for a second
  digitalWrite(set1, LOW);    // turn the LED off by making the voltage LOW
  delay(100);               // wait for a second
  
    digitalWrite(set2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);               // wait for a second
 
    digitalWrite(set3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(400);               // wait for a second
  digitalWrite(set3, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  
    digitalWrite(set2, LOW);    // turn the LED off by making the voltage LOW
  delay(200);               // wait for a second
  
  
    digitalWrite(set1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(400);               // wait for a second
  digitalWrite(set1, LOW);    // turn the LED off by making the voltage LOW
  delay(50);               // wait for a second
 
  }*/
}
