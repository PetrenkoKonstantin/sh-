#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define SIZE 512
typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    BYTE* buffer = malloc(SIZE);
    char nameNewFile [8]; 
    FILE *newOutFile;
    int counter = 0;
    
    // ensure proper usage
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./copy infile outfile\n");
        return 1;
    }
    
    // open input file 
    char *infile = argv[1];
    FILE *inptr = fopen(infile, "r");
    
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }
    
    if (buffer == NULL)
    {
        printf("Error memory\n");
        return 2;
    }
    
    while (fread(buffer,sizeof(buffer), 1, inptr) == 1)
    {
             
            if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] == 0xe0 || buffer[3] == 0xe1))
            {
                sprintf(nameNewFile, "%03d.jpg", counter);
                counter++;
                    
                if (newOutFile != NULL)
                {
                    fclose(newOutFile);
                    newOutFile = fopen(nameNewFile, "w");
                    fwrite(buffer, sizeof(buffer), 1, newOutFile);
                }
                else
                {
                    newOutFile = fopen(nameNewFile, "w");
                    fwrite(buffer, sizeof(buffer), 1, newOutFile);
                }
            }
             
            else if(newOutFile != NULL)
            {
                fwrite(buffer, sizeof(buffer), 1, newOutFile);
            }
    }
     fclose(inptr);
     fclose(newOutFile);
     free(buffer);
     
     return 0;
}
    
   