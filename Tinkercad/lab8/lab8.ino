// C++ code
//
enum Pins
{
  R = 11,
  G = 9,
  B = 10
};
int arr[2][6]{{R,G,B},{0,50,100,150,200,250}};
void setup()
{
  Serial.begin(9600);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop()
{
  for (int color = 0; color < 3; color++)
  {rgbOn(arr[0][color]);
  rgbOff(arr[0][color]);
  }
  
}

void rgbOn(int color)
{
  for (int b = 0; b < 6; b++)
  {
    analogWrite(color,arr[1][b]);
    delay(500);
    Serial.println("Color" + String(arr[0][color]) + " | " + "Bytes" + String(arr[1][b]));
  }
}

void rgbOff(int color)
{
  for (int b = 5; b >= 0; b--)
  {
    analogWrite(color,arr[1][b]);
    delay(500);
    Serial.println("Color " + String(arr[0][color]) + " | " + "Bytes " + String(arr[1][b]));
  }
}