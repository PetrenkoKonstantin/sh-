#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main()
{
        int size;
     do {
         printf("height: ");
         size = GetInt();
    } while ( (size > 23) || (size < 0));
    
        
    for (int i = 1; i <= size; i++)
    {
        for (int y = i;  y < size; y++)
        {
                printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("#\n");
       
    }
        return 0;
}

