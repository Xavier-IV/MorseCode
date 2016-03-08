/*
 Fade

 This example shows how to fade an LED on pin 9
 using the analogWrite() function.

 This example code is in the public domain.
 */

int led = 9;           // the pin that the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  helloMorse();
}

void helloMorse(){
  //....  .  .-..  .-..  ---
  //H
  digitalWrite(led, HIGH);   
  delay(200);              
  digitalWrite(led, LOW);    
  delay(100);

  digitalWrite(led, HIGH);   
  delay(200);              
  digitalWrite(led, LOW);    
  delay(100); 

  digitalWrite(led, HIGH);   
  delay(200);              
  digitalWrite(led, LOW);    
  delay(100); 

  digitalWrite(led, HIGH);   
  delay(200);              
  digitalWrite(led, LOW);    
  delay(1000);
  
  //E
  digitalWrite(led, HIGH);   
  delay(200);              
  digitalWrite(led, LOW);    
  delay(1000);  
  
  //L
  digitalWrite(led, HIGH);   
  delay(200);              
  digitalWrite(led, LOW);    
  delay(100);

  digitalWrite(led, HIGH);   
  delay(1000);              
  digitalWrite(led, LOW);    
  delay(100); 

  digitalWrite(led, HIGH);   
  delay(200);              
  digitalWrite(led, LOW);    
  delay(100); 

  digitalWrite(led, HIGH);   
  delay(200);              
  digitalWrite(led, LOW);    
  delay(1000);
  
  //L
  digitalWrite(led, HIGH);   
  delay(200);              
  digitalWrite(led, LOW);    
  delay(100);

  digitalWrite(led, HIGH);   
  delay(1000);              
  digitalWrite(led, LOW);    
  delay(100); 

  digitalWrite(led, HIGH);   
  delay(200);              
  digitalWrite(led, LOW);    
  delay(100); 

  digitalWrite(led, HIGH);   
  delay(200);              
  digitalWrite(led, LOW);    
  delay(1000);
  
  //O
  
  digitalWrite(led, HIGH);   
  delay(1000);              
  digitalWrite(led, LOW);    
  delay(100); 
  
  digitalWrite(led, HIGH);   
  delay(1000);              
  digitalWrite(led, LOW);    
  delay(100); 

  digitalWrite(led, HIGH);   
  delay(1000);              
  digitalWrite(led, LOW);    
  delay(1000); 

}
