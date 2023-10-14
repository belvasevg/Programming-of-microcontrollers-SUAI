/*
#define RED 0
#define GREEN 1
#define BLUE 2
#define CYAN 3
#define YELLOW 4
*/
void setup()
{
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(4,OUTPUT);
}

enum colors // перечисляемый тип данных
{  RED = 0,  GREEN = 1,  BLUE = 2,  CYAN = 3,  YELLOW = 4};

void loop()
{
  for (int i = 0; i < 5; i++) //количество цветов
  {
    //КРАСНЫЙ
    if (i==RED) //для работы красного
    {
      for (int b = 0; b < 256; b+=2) //включение
    	{
        	red(b);
        	Serial.println("red test on " + String(b));
    	}
      for (int b = 255; b >= 0; b-=2)//выключение
    	{
        	red(b);
        	Serial.println("red test off " + String(b));
    	}
    }
    //ЗЕЛЁНЫЙ
    else if (i==GREEN) // для работы зелёного
    {
      for (int b = 0; b < 256; b+=2)
    	{
        	green(b);
        	Serial.println("green test on " + String(b));
    	}
      for (int b = 255; b >= 0; b-=2)
    	{
        	green(b);
        	Serial.println("green test off " + String(b));
    	}
    }
    //СИНИЙ
    else if (i==BLUE) // для работы зелёного
    {
      for (int b = 0; b < 256; b+=2)
    	{
        	blue(b);
        	Serial.println("blue test on " + String(b));
    	}
      for (int b = 255; b >= 0; b-=2)
    	{
        	blue(b);
        	Serial.println("blue test off " + String(b));
    	}
    }
    //ФИОЛЕТОВЫЙ
    else if (i==CYAN) // для работы зелёного
    {
      for (int b = 0; b < 256; b+=2)
    	{
        	blue(b);
        	green(b);
        	Serial.println("Cyan test on " + String(b));
    	}
      for (int b = 255; b >= 0; b-=2)
    	{
        	blue(b);
        	green(b);
        	Serial.println("Cyan test off " + String(b));
    	}
    }
    //ЖЁЛТЫЙ
    else if (i==YELLOW) // для работы зелёного
    {
      for (int b = 0; b < 256; b+=2)
    	{
        	red(b);
        	green(b);
        	Serial.println("Yellow test on " + String(b));
    	}
      for (int b = 255; b >= 0; b-=2)
    	{
        	red(b);
        	green(b);
        	Serial.println("Yellow test off " + String(b));
    	}
    }
  }
}

void red(int b)
{
  analogWrite(8,b);
  delay(1);
}
void blue(int b)
{
  analogWrite(7,b);
  delay(1);
}
void green(int b)
{
  analogWrite(4,b);
  delay(1);
}

  
