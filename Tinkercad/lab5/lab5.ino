// C++ code
//
#define PHOTO_SENSOR A0
#define RED A3
#define BLUE A4
#define GREEN A5
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  short val = analogRead(PHOTO_SENSOR);
  Serial.println("Value in bytes : " + String(val));
  
  String str1 = "Value of light = ";
  float lucs = map(val,0,1023,1000,0);
  Serial.println(str1 + lucs + "Lk");
  int color = map(val,1023,0,0,255);
  Serial.println("Value in color : " + String(color));
  analogWrite(RED,color);
  analogWrite(BLUE,color);
  
  
  delay(500);
}