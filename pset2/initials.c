#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(void){
    const char SPACE = ' ';
    string name = GetString();                  // ������� ��� ����� ������ �������������
   
   for(int i = 0; i <= strlen(name); i++){      // ������� ������ ��������� ������������� � ������� �������
       if (name[i] > 96){
           name[i] -= 32; 
       }
   }
           printf("%c", name[0]);               // ����� ������ ����� ������ 
   
   for (int y = 0; y < strlen(name); y++){      // ���������� ��������� ����� ���� � ������
       if (name[y] == SPACE){
           name[y] = name[y + 1];
           
           printf("%c", name[y]);               // ����� ��������� ���� � ������ 
           
       }
   }
           printf("\n"); 
   
            return 0;
}  
   
 