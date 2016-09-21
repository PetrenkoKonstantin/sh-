#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(void){
    const char SPACE = ' ';
    string name = GetString();                  // функция для ввода строки пользователем
   
   for(int i = 0; i <= strlen(name); i++){      // перевод строки введенной пользователем в верхний регистр
       if (name[i] > 96){
           name[i] -= 32; 
       }
   }
           printf("%c", name[0]);               // вывод первой буквы строки 
   
   for (int y = 0; y < strlen(name); y++){      // определяем заглавные буквы слов в строке
       if (name[y] == SPACE){
           name[y] = name[y + 1];
           
           printf("%c", name[y]);               // вывод заглавных букв в строке 
           
       }
   }
           printf("\n"); 
   
            return 0;
}  
   
 