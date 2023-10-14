// C++ code
//

enum Pins
{
  R = 11,
  G = 9,
  B = 10
};

const int SIZE = 6;
int arr[SIZE]{0,50,100,150,200,250};
void setup()
{
  Serial.begin(9600);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop()
{
  on(R,&*arr);
  
  on(B);
  on(G,&*arr);
  off(G,&*arr);
  off(R,&*arr);
  off(B);
}

//перегрузка функции включения
void on(int colorPin)
{
  digitalWrite(colorPin,HIGH);
  delay(1000);
}

void on(int colorPin, int arr[])
{
  for (int i = 0; i < SIZE; i++)
  {
    analogWrite(colorPin, arr[i]);
    delay(500);
    Serial.println(String(arr[i]));
  }
}

//перегрузка функции отключения
void off(int colorPin)
{
  digitalWrite(colorPin,LOW);
  delay(1000);
}

void off(int colorPin, int arr[])
{
  for (int i = (SIZE - 1); i >= 0; i--)
  {
    analogWrite(colorPin, arr[i]);
    delay(500);
    Serial.println(String(arr[i]));
  }
}