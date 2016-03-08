/*@Author - Mohamad Zafranudin Zafrin @ Xavier -IV
 *@Copyright 2016 MorseCode
 *
 */

int led = 9;           // the pin that the LED is attached to

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
  //....  .  .-..  .-..  --- [H E L L O Morse code]

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
