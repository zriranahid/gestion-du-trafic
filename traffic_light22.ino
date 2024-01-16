bool d=1;
int ledR2=13;
int ledO2=12;
int ledV2=11;
int ledR1=10;
int ledO1=9;
int ledV1=8;

void setup() {


pinMode(ledR2,OUTPUT);
pinMode(ledO2,OUTPUT);
pinMode(ledV2,OUTPUT);
pinMode(ledR1,OUTPUT);
pinMode(ledO1,OUTPUT);
pinMode(ledV1,OUTPUT);
digitalWrite(ledV1,HIGH);
digitalWrite(ledR2,HIGH);

}

void loop() {
  delay(20000);
  digitalWrite(ledV1,LOW);
   digitalWrite(ledO1,HIGH);
   delay(4000);
   digitalWrite(ledO1,LOW);
digitalWrite(ledR1,HIGH);
delay(2000);
digitalWrite(ledR2,LOW);

  digitalWrite(ledV2,HIGH);
delay(20000);
digitalWrite(ledV2,LOW);
digitalWrite(ledO2,HIGH);
   delay(4000);
   digitalWrite(ledO2,LOW);
  digitalWrite(ledR2,HIGH);
   delay(4000);
  digitalWrite(ledR1,LOW);
digitalWrite(ledV1,HIGH);


}



