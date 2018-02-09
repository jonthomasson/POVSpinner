      /*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.

  To upload to your Gemma or Trinket:
  1) Select the proper board from the Tools->Board Menu
  2) Select USBtinyISP from the Tools->Programmer
  3) Plug in the Gemma/Trinket, make sure you see the green LED lit
  4) For windows, install the USBtiny drivers
  5) Press the button on the Gemma/Trinket - verify you see
     the red LED pulse. This means it is ready to receive data
  6) Click the upload button above within 10 seconds
*/
 

int LED1 = 4;
int LED2 = 3;
int LED3 = 2;
int LED4 = 0;
int LED5 = 1;
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);

}

// the loop routine runs over and over again forever:
void loop() {
    digitalWrite(LED1, HIGH); 
    delay(50);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH); 
    delay(50);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH); 
    delay(50);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, HIGH); 
    delay(50);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, HIGH); 
    delay(50);
    digitalWrite(LED5, LOW);
    digitalWrite(LED4, HIGH); 
    delay(50);
    digitalWrite(LED4, LOW);
    digitalWrite(LED3, HIGH); 
    delay(50);
    digitalWrite(LED3, LOW);
    digitalWrite(LED2, HIGH); 
    delay(50);
    digitalWrite(LED2, LOW);
    
}
    
