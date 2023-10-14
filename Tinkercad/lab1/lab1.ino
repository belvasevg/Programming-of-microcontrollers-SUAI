// C++ code
//
int i;
void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  for (i = 0; i<10 ; i++)
  {
    Serial.println("Value of iteration: " + String(i));
    digitalWrite(LED_BUILTIN, true);
    delay(500);
    digitalWrite(LED_BUILTIN, false);
    delay(500);
  }
}