#define  r 1
#define  g 4
#define  b 0
//This version 2 provides smooth transisions between colors
//for use with a common anode RGB LED
int cnt=255;
void setup() {
  // put your setup code here, to run once:
pinMode(r,OUTPUT);
pinMode(g,OUTPUT);
pinMode(b,OUTPUT);
analogWrite(r,255);
analogWrite(g,255);
analogWrite(b,255);
}

void loop() {
  // put your main code here, to run repeatedly:

analogWrite(r,255-0);
analogWrite(g,255-255);
analogWrite(b,255-255);
delay(1000);
//first transision
cnt=255;
while(cnt >0)
{
cnt--;
if(cnt > 126){

analogWrite(r,255-(255-cnt));

}
analogWrite(g,255-cnt);
delay(25);
}
analogWrite(r,255-128);
analogWrite(g,255-0);
analogWrite(b,255-255);
delay(1000);

//second tranision
cnt =0;
while(cnt < 128){
cnt++;
analogWrite(r,255-(127+cnt));
analogWrite(g,255-cnt);
analogWrite(b,255-(255-cnt));
delay(25);


}
while (cnt < 255){
cnt++;
analogWrite(b,255-(255-cnt));
delay(25);
}
analogWrite(r,255-255);
analogWrite(g,255-128);
analogWrite(b,255-0);
delay(1000);
//third tranision
cnt=0;
while(cnt <128){
cnt++;
analogWrite(r,255-(255-cnt));
analogWrite(g,255-(127+cnt));
delay(25);
  
}
analogWrite(r,255-128);
analogWrite(g,255-255);
analogWrite(b,255-0);
delay(1000);
//fourth transision
cnt=0;
while(cnt<128){
cnt++;
analogWrite(r,255-(128-cnt));
analogWrite(b,255-cnt);
delay(25);  
}
while (cnt < 255){
cnt++;
analogWrite(b,255-cnt);
delay(25);
  
}
}
