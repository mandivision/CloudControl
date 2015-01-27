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
int control1=30;
int thunderdelay;
int cycle;
int interval;

// the setup routine runs once when you press reset:
void setup() {    
 Serial.begin(9600);  
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
 
//  if((digitalRead(control1)) == LOW){
 thunderdelay=random(1500,2500);
cycle=random(1,5);
interval= random(10,100);
Serial.println(cycle);
  if (cycle == 1){
    
  digitalWrite(set3, HIGH);
  delay(150);
  digitalWrite(set3, LOW);
  delay(interval);
  
  digitalWrite(set3,HIGH);
  
  
    digitalWrite(set6, HIGH);
  delay(100);
  digitalWrite(set6, LOW);
  digitalWrite(set3,LOW);
  
  
    digitalWrite(set5, HIGH);
  delay(50);
  digitalWrite(set5, LOW);  
  
  digitalWrite(set4, HIGH);
  delay(interval);
  digitalWrite(set4, LOW);
  
    digitalWrite(set5, HIGH);
  delay(50);
  digitalWrite(set5, LOW);
  
    digitalWrite(set6, HIGH);
  delay(70);
  digitalWrite(set6, LOW);
  
    digitalWrite(set1, HIGH);
  delay(500);
  digitalWrite(set1, LOW);    // end of first burst
  
  delay(thunderdelay); 
  }
  
  if( cycle == 2){
    digitalWrite(set1, HIGH);   //begining of short bursts
  delay(40);
  digitalWrite(set1, LOW);
  delay(250);
    digitalWrite(set1, HIGH);
  delay(40);
  digitalWrite(set1, LOW);
  delay(50);
  
      digitalWrite(set1, HIGH);   //begining of short bursts
  delay(40);
  digitalWrite(set1, LOW);
  delay(250);
    digitalWrite(set2, HIGH);
       digitalWrite(set1, HIGH);
  delay(40);
  digitalWrite(set2, LOW);
  delay(50);
      digitalWrite(set3, HIGH);   //begining of short bursts
  delay(40);
  digitalWrite(set1, LOW);
  delay(250);
    digitalWrite(set1, HIGH);
  delay(40);
  digitalWrite(set1, LOW);
     digitalWrite(set3, LOW);
  delay(50);
  
   delay(thunderdelay); 
  }
  
  if(cycle == 3){
     digitalWrite(set1, LOW);
  delay(250);
    digitalWrite(set1, HIGH);
  delay(interval);
  digitalWrite(set1, LOW);
     digitalWrite(set3, LOW);
     digitalWrite(set5,HIGH);
     digitalWrite(set6,HIGH);
     delay(100);
     digitalWrite(set5, LOW);
     delay(50);
     digitalWrite(set5,HIGH);
     delay(250);
     digitalWrite(set6,LOW);
     delay(120);
     digitalWrite(set5, LOW);
     
          digitalWrite(set1, LOW);
  delay(250);
    digitalWrite(set3, HIGH);
  delay(interval);
  digitalWrite(set1, LOW);
     digitalWrite(set3, LOW);
     digitalWrite(set5,HIGH);
     digitalWrite(set6,HIGH);
     delay(100);
     digitalWrite(set5, LOW);
     delay(50);
     digitalWrite(set5,HIGH);
     delay(70);
     digitalWrite(set6,LOW);
     delay(20);
     digitalWrite(set5, LOW);
     delay(thunderdelay); 
    
  }
  
  if (cycle == 4){
     digitalWrite(set6,HIGH);
     delay(20);
     digitalWrite(set5, HIGH); 
     delay(interval);
     digitalWrite(set5,LOW);
     digitalWrite(set4,HIGH);
     delay(100);
     digitalWrite(set4,LOW);
     digitalWrite(set6, LOW);
         digitalWrite(set5,HIGH);
     delay(20);
     digitalWrite(set6, HIGH);
     digitalWrite(set3, HIGH); 
     delay(interval);
     digitalWrite(set3,LOW);
     digitalWrite(set4,HIGH);
     delay(100);
     digitalWrite(set4,LOW);
    delay(thunderdelay); 
  }
  
  if(cycle == 5){
    
  }
  
}
