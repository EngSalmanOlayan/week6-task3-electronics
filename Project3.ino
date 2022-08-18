void setup()
{
pinMode(A0, INPUT);  
Serial.begin(9600);
}
void loop()
{
  int lightRead = analogRead(A0);
  Serial.println(lightRead);
  delay(5);
}