void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT);
pinMode(18, OUTPUT);
pinMode(19, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(5, HIGH);
digitalWrite(18, HIGH);
digitalWrite(19, HIGH);
delay(5000);
digitalWrite(5, LOW);
digitalWrite(18, LOW);
digitalWrite(19, LOW);
delay(5000);
}
