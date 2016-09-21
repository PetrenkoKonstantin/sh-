#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(void){
    const char SPACE = ' ';
    string name = GetString();                  // function for string input by the user
   
   for(int i = 0; i <= strlen(name); i++){      // a newline entered by the user to upper case
       if (name[i] > 96){
           name[i] -= 32; 
       }
   }
           printf("%c", name[0]);               // the output of the first letters of a string 
   
   for (int y = 0; y < strlen(name); y++){      // determined by the capital letters of words in the string
       if (name[y] == SPACE){
           name[y] = name[y + 1];
           
           printf("%c", name[y]);               // the withdrawal of capital letters in the string 
           
       }
   }
           printf("\n"); 
   
            return 0;
}  
   
 