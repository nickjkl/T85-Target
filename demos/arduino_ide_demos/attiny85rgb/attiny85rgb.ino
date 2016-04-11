
//for use with a common anode RGB LED
void setup() {
  // put your setup code here, to run once:
pinMode(1,OUTPUT);
pinMode(4,OUTPUT);
pinMode(0,OUTPUT);
analogWrite(1,255);
analogWrite(4,255);
analogWrite(0,255);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(1,255-0);
analogWrite(4,255-255);
analogWrite(0,255-255);
delay(1000);

analogWrite(1,255-128);
analogWrite(4,255-0);
analogWrite(0,255-255);
delay(1000);

analogWrite(1,255-255);
analogWrite(4,255-128);
analogWrite(0,255-0);
delay(1000);

analogWrite(1,255-128);
analogWrite(4,255-255);
analogWrite(0,255-0);
delay(1000);
}
