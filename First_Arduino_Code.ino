void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT)//OUTPUT IS SET;
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);//LED TURNED ON
//digitalWrite(13,LOW);//LED TURNED OFF
//
//
digitalWrite(13,HIGH);
delay(1000);//delay(900)
digitalWrite(13,LOW);
delay(1000);//delay(100)
//First Experiment is also done by breadboard with LED and same delay values.
//Output 13 can be changed to any number on Arduino microcontroller
}
