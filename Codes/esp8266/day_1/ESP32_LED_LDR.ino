int lightI=0;
void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT);
pinMode(18, OUTPUT);
pinMode(19, OUTPUT);
pinMode(4, INPUT);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
lightI=analogRead(4);
Serial.println(lightI);
if(lightI>3300){
digitalWrite(5, HIGH);
digitalWrite(18, HIGH);
digitalWrite(19, HIGH);
delay(1000);
}
else {
digitalWrite(5, LOW);
digitalWrite(18, LOW);
digitalWrite(19, LOW);
delay(1000);
}
}
