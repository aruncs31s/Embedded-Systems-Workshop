int state=0;
void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT);
pinMode(18, OUTPUT);
pinMode(19, OUTPUT);
pinMode(22, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
state=digitalRead(22);
if (state==HIGH) {
digitalWrite(5, HIGH);
digitalWrite(18, HIGH);
digitalWrite(19, HIGH);
delay (2000);
}
else {
digitalWrite(5, LOW);
digitalWrite(18, LOW);
digitalWrite(19, LOW);
}
delay (2000);
}
