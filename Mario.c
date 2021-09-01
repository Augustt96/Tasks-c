#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // ask for height
    do
    {
        height = get_int("Height: ");
    } 

    // possible range of height
    while (height < 1 || height > 8);

    // i makes a new line
    for (int i = 1; i <= height; i++) 
    {
    
        // j makes spaces
        for (int j = height; j > i; j--) 
        {
            printf(" ");
        }
        
        // l puts # sign
        for (int l = 0; l < i; l++) 
        {
            printf("#");
        }
        printf("\n");
    }
}