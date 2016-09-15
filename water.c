#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main()
{
    int minutes;
    printf("minutes: ");
    
     do 
     {
         minutes = GetInt();
         printf("Retry: ");
         
     } 
     while (minutes < 0);

    printf("bottles: %d",minutes * 12);

    return 0;
}
