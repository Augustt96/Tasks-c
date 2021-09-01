#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    // check if it is not more than one command line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    // go through each char to check if it is int
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (argv[1][i] < 48 || argv[1][i] > 57)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
  
    printf("Success\n");
  
    // convert string argv to int
    int k = atoi(argv[1]);
  
    // ask for plaintext
    string p = get_string("Plaintext: ");
  
    // make an array for ciphertext
    char c[strlen(p)];
  
    printf("ciphertext:");
  
    // go through plaintext by one char
    for (int i = 0; i < strlen(p); i++)
    {
        // check if it is alphabetic char
        if (isalpha(p[i]))
        {
            // use ASCII code for uppercase A
            char a = 'A';
      
            if islower(p[i])
            {
                // use ASCII code for lowercase a
                a = 'a';
            }
            // use formula to check the new char and add to c array
            c[i] = ((((p[i] - a) + k) % 26) + a);
            printf("%c", c[i]);
        }
        else
        {
            // if alphabetic, add char to c array
            c[i] = p[i];
            printf("%c", c[i]);
        }
    }
  
    printf("\n");
    
    return 0;
}