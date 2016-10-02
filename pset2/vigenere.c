#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string key;
    string text;
    
    int keyIndex = 0; 
    int module = 0;
   
    if(argc != 2)
    {
        printf("input error\n");
        return 1;
    }
    else 
    {
        key = argv[1];
        
        for(int i = 0, n = strlen(key); i < n; i++)
        {
            if(!isalpha(key[i]))
            {
                printf("Error: %c\n", key[i]);
                return 1;
            }
        }
    }
    printf("plaintext: ");
    
    text = GetString();
    
    printf("ciphertext: ");
       
    for(int i = 0, n = strlen(text); i < n; i++)
    {
        keyIndex = module % strlen(key);

        if(isalpha(text[i]))
        {
        
            if((isupper(text[i])) && (isupper(key[keyIndex])))
               {
                   int result = ((text[i] - 'A') + (key[keyIndex] - 'A' )) % 26 + 'A';
                   printf("%c", result);
                }
               
                if((isupper(text[i])) && (islower(key[keyIndex])))
                {
                    int result = ((text[i] - 'A') + (key[keyIndex] - 'a' )) % 26 + 'A';
                    printf("%c", result); 
                }
            
                    if((islower(text[i])) && (isupper(key[keyIndex])))
                    {
                        int result = ((text[i] - 'a') + (key[keyIndex] - 'A' )) % 26 + 'a';
                        printf("%c", result);
                    }
                
                        if((islower(text[i])) && (islower(key[keyIndex])))
                        {
                            int result = ((text[i] - 'a') + (key[keyIndex] - 'a' )) % 26 + 'a';
                            printf("%c", result);
                        } 
                        module++; 
        }
            else
        {
           printf("%c", text[i]);
        }
    }
             printf("\n");
             return 0;
}