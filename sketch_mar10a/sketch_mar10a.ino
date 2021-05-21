void setup()
{
  Serial.begin(9600);
  Serial.println("astept comenzi");
  pinMode(11, OUTPUT);
  pinMode(8, INPUT_PULLUP);
}
 
void loop()
{
  if (Serial.available()){
    String command = Serial.readString();
    
    if (command == "on")
    {
      digitalWrite(11, HIGH);
    }
    else if (command == "off")
    {
      digitalWrite(11, LOW);
    }
    else if (command == "blink")
    {
      digitalWrite(11, LOW);
      delay(500);
      digitalWrite(11, HIGH);
      delay(1000);
      digitalWrite(11, LOW);
    }
    else if (command == "get")
    {
      int value = digitalRead(8);
      Serial.println(value);
    }
    else if (command.substring(0, 6) == "analog")
    {
      int value = command.substring(7).toInt();
      analogWrite(11, value);
    }
  }
}
