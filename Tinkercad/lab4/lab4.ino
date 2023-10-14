/*
1 - (;-20]синий
2 - (-20;0)голубой
3 - [0;10]жёлтый
4 - (10;25] зеленый
5 - (25;)красный
*/

#define TEMP A0

enum Pins
{
  R = 11, //пин для красного
  B = 10,
  G = 9
};

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop()
{
  int temp = calculating_temp();
  //Serial.print(temp);
  //Serial.print(" C\n");
  Serial.println(String(temp) + "C");
  
  delay(500);
  
   if (temp < -10)
  {
    RGB_off();
    RGB_work(false,false,true);
  }
  else if ((temp >= -10) && (temp < 5))
  {
    RGB_off();
    RGB_work(false,true,true);
  }
  else if ((temp >=5) && (temp < 25))
  {
    RGB_off();
    RGB_work(false,true,false);
  }
  else if (temp >=25)
  {
    RGB_off();
    RGB_work(true,false,false);
  }
  delay(500); 
}

//функция для возврата значений температуры
int calculating_temp()
{
  int celsius,pretemp;
  pretemp = ((analogRead(TEMP) - 20) * 3.04);
  celsius = map(pretemp, 0, 1023, -40, 125);
  return celsius;
  //map(принимаемое значение, мин д1, макс д1, мин д2, макс д2)
}

//работа RGB
void RGB_work(bool r,bool g,bool b)
{
  digitalWrite(R, r);
  digitalWrite(G, g);
  digitalWrite(B, b);
}

//выключение светодиодов
void RGB_off()
{
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
}
