int kelip1=6;
int kelip2=7;
int kelip3=8;
int kelip4=9;

void setup() {
  pinMode (kelip1,OUTPUT);
  pinMode (kelip2,OUTPUT);
  pinMode (kelip3,OUTPUT);
  pinMode (kelip4,OUTPUT);
}

void loop() {
  digitalWrite(kelip1,HIGH);
  digitalWrite(kelip2,LOW);
  digitalWrite(kelip3,LOW);
  digitalWrite(kelip4,LOW);
    delay(1500);
  digitalWrite(kelip1,LOW);
  digitalWrite(kelip2,HIGH);
  digitalWrite(kelip3,LOW);
  digitalWrite(kelip4,LOW);
    delay(1500);
  digitalWrite(kelip1,LOW);
  digitalWrite(kelip2,LOW);
  digitalWrite(kelip3,HIGH);
  digitalWrite(kelip4,LOW);
    delay(1500);
  digitalWrite(kelip1,LOW);
  digitalWrite(kelip2,LOW);
  digitalWrite(kelip3,LOW);
  digitalWrite(kelip4,HIGH);
    delay(1500);
}
