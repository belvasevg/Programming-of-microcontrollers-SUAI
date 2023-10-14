/*
1 - красный статично горит (до 10 секунд)
2 - горят красный и жёлтый (3 секунды)
3 - горит зелёный (до 10 секунд)
4 - зелёный мигает 3 раза (3 секунды)
5 - статично горит жёлтый (3 секунды)
6 - конец цикла

*/

void setup()
{
  Serial.begin(9600); //Функция скорости передачи данных в монитор порта
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
}
//прототипы функций
void red(int on, int off); //параметры функции
void yellow(int on, int off);
void green(int timing);

void loop()
{
  red(3000,1000);
  yellow(2000,1000);
  green(1000);
}
//функции работы светодиодов
void red(int on, int off)
{
  digitalWrite(8, true);
  delay(on);
  digitalWrite(8, false);
  delay(off);
}

void yellow(int on, int off)
{
  digitalWrite(7, true);
  delay(on);
  digitalWrite(7, false);
  delay(off);
}

void green(int timing)
{
  digitalWrite(4, true);
  delay(timing);
  digitalWrite(4, false);
  delay(timing);
}