#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv []) {
    
    // check for correct input from the command line
    if (argc != 2) {
         printf("Error");
           return 1;
    }  
        printf("plaintext: "); 
        string text = GetString();
     
        const int SIZE = 26; // size abc 
        int KEY = atoi(argv[1]);
        printf("ciphertext: ");

    // encrypt text
    for (int i = 0, n = strlen(text); i < n; i++) {
        if (isalpha (text[i])) {
            if (isupper (text[i])) {
            text[i] = (text[i] - 'A' + KEY) % SIZE;
            text[i] = text[i] + 'A';
       }
       
       if(islower (text[i])) {
           text[i] = (text[i] - 'a' + KEY) % SIZE;
           text[i] = text[i] + 'a';
        }
    }
    
        printf("%c", text[i]);
  }
        printf("\n");
    
}