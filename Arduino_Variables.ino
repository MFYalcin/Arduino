int redLED = 8;
float pi = 3.14;
int dit = 100;
int dah = 500;
int longW = 1000;

// In order to do with different LEDs, we initialize LEDs as blueLED = 4, greenLED = 5, yellowLED = 6 and then on breadboard, we put them in series. 
//digitalWrite(blueLED,HIGH);
//delay(dit);
//digitalWrite(blueLED,LOW);
//And so on...

//String myName = "Muhammet Yalcin";
void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);




digitalWrite(redLED,HIGH);
delay(dah);
digitalWrite(redLED,LOW);
delay(dah);

digitalWrite(redLED,HIGH);
delay(dah);
digitalWrite(redLED,LOW);
delay(dah);

digitalWrite(redLED,HIGH);
delay(dah);
digitalWrite(redLED,LOW);
delay(dah);




digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

delay(longW);
}
