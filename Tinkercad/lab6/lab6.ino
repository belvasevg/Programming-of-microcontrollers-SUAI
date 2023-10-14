#include <LiquidCrystal.h> // добавление библиотеки для работы LCD
#define TEMP A5
#define RED A2
#define BLUE A3
#define GREEN A4
#define DB4 5
#define DB5 4
#define DB6 3
#define DB7 2
#define RS 12
#define E 11

LiquidCrystal LCD(RS, E, DB4, DB5, DB6, DB7); //объявление портов для LCD
void blue();
void setup()
{
  Serial.begin(9600);
  pinMode(TEMP, INPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  LCD.begin(16, 2);// определение количества колонок и рядов на LCD
  LCD.setCursor(0, 0);
  LCD.print("Temperature:    "); //вывод сообщения на LCD
  delay(1000);
}

void loop()
{
  int temp = calculating_temp();
  Serial.print(temp);
  Serial.print(" C\n");
  LCD.print(temp + String(" C"));
  LCD.setCursor(0, 1);
  delay(1000);
  
  if (temp < -10)
  {
    rgb_off();
    blue();
  }
  else if (temp >= -10 && temp < 5)
  {
    rgb_off();
    yellow();
  }
  else if (temp >=5 && temp < 25)
  {
    rgb_off();
    green();
  }
  else if (temp >=25)
  {
    rgb_off();
    red();
  }
  
}

void rgb_off()
{
  analogWrite(RED,false);
  analogWrite(BLUE,false);
  analogWrite(GREEN,false);
}

void red()
{
  analogWrite(RED,255);
}

void green()
{
  analogWrite(GREEN,255);
}

void yellow()
{
  analogWrite(RED,255);
  analogWrite(GREEN,200);
}
void blue()
{
  analogWrite(BLUE, 255);
}

//функция для возврата значений температуры
int calculating_temp()
{
  int celsius;
  celsius = map(((analogRead(TEMP) - 20) * 3.04), 0, 1023, -40, 125);
  return celsius;
}