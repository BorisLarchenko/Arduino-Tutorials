#include <LiquidCrystalRus.h>
int i;
int k;
char* strings[] = {
  "Привет, Димитрий! Как погода в Египте ? ",
  "огода в Египте ? Говорят, что небо покры",
  ", что небо недавно покрылось тучами и по",
  "авно тучами и пошел самый сильный дождь.",
  "й сильный дождь. Привет, Димитри"
  };
LiquidCrystalRus lcd(7,6, 5, 4, 3, 2); // (RS, E, DB4, DB5, DB6, DB7)
void setup() {
  // put your setup code here, to run once:
lcd.begin(16, 2);
lcd.clear() ;
}


void loop() {
  
  for (k = 0; k <= 3 ; k++) // задаем начальное значение 1, конечное 4 и задаем шаг цикла - 1.
    {
      lcd.clear() ;
      lcd.setCursor(0,0);
      lcd.print(strings[k]);
      
      
      delay(2000);
     if (k >= 4){k = -1;};
          for (i = 1; i <= 24; i++) // задаем начальное значение 1, конечное 16 и задаем шаг цикла - 1.
          {
              delay(1000);
              lcd.scrollDisplayLeft();
              delay(15);
              if (i > 25){i = 0;};
              
            }
     }

lcd.clear() ;
lcd.setCursor(0,0);lcd.print(strings[4]);
delay(2000);
for (i = 1; i <= 16; i++) // задаем начальное значение 1, конечное 16 и задаем шаг цикла - 1.
    {
        delay(1000);
        lcd.scrollDisplayLeft();
        delay(15);
        
    }
lcd.clear() ;
}



