// C++ code
//

enum Pins
{
  R = 11,
  G = 9,
  B = 10
};
int arr[6]{0,50,100,150,200,250};
void setup()
{
  Serial.begin(9600);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop()
{
  redOn(arr);
  redOff(arr);
}

void redOn(int arr[])
{
  for (int i = 0; i < 6; i++)
  {
    analogWrite(R, arr[i]);
    delay(500);
    Serial.println(String(arr[i]));
  }
}
void redOff(int arr[])
{
  for (int i = 4; i >= 1; i--)
  {
    analogWrite(R, arr[i]);
    delay(500);
    Serial.println(String(arr[i]));
  }
}