/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int set1 = 10;
int set2 = 9;
int set3 = 8;
int set4 = 7;
int set5 = 6;
int set6 = 5;
int control1=32;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(set1, OUTPUT); 
  pinMode(set2, OUTPUT);
  pinMode(set3, OUTPUT); 
 pinMode(set4, OUTPUT); 
pinMode(set5, OUTPUT); 
pinMode(set6, OUTPUT); 
  pinMode(control1, INPUT_PULLUP);
  
}

// the loop routine runs over and over again forever:
void loop() {
 
  //if((digitalRead(control1)) == LOW){
 

  
  digitalWrite(set3, HIGH);
  delay(250);
  digitalWrite(set3, LOW);
  delay(50);
  
  digitalWrite(set3,HIGH);
  
    digitalWrite(set6, HIGH);
  delay(100);
  digitalWrite(set6, LOW);
  
    digitalWrite(set5, HIGH);
  delay(50);
  digitalWrite(set5, LOW);  
  
  digitalWrite(set4, HIGH);
  delay(500);
  digitalWrite(set4, LOW);
  
    digitalWrite(set5, HIGH);
  delay(500);
  digitalWrite(set5, LOW);
  
    digitalWrite(set6, HIGH);
  delay(500);
  digitalWrite(set6, LOW);
  
    digitalWrite(set1, HIGH);
  delay(500);
  digitalWrite(set1, LOW);    // end of first burst
  
  delay(1000); 
  
    digitalWrite(set1, HIGH);   //begining of short bursts
  delay(40);
  digitalWrite(set1, LOW);
  delay(250);
    digitalWrite(set1, HIGH);
  delay(40);
  digitalWrite(set1, LOW);
  delay(50);
//  }
  
}
