void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
for(int dcy=0; dcy<255; dcy++)
{
  analogWrite(5, dcy);
  analogWrite(18, dcy);
  analogWrite(19, dcy);
  delay(5);
}
for(int dcy=255; dcy>0; dcy--)
{
  analogWrite(5, dcy);
  analogWrite(18, dcy);
  analogWrite(19, dcy);
  delay(5);
}
}
