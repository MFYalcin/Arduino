//Analog outputs are ~3,~5,~6,~9,~10,~11
//Digital outputs are already covered and used from 2 to 13 inclusive
// 0 to 255, 2^8 = 256 -> 8 bits === 0 = 0 Volts, 255 = 5 Volts
int bluePin = 9;
int bright = 5; //Can change the brightness...(Ranges from 0 to 255)

void setup() {
  // put your setup code here, to run once:
pinMode(bluePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(bluePin,bright);

}
