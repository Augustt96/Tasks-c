#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    //ask for height
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
        
        // l puts # sign for first pyramid
        for (int l = 0; l < i; l++) 
        {
            printf("#");
        }

        // k makes space between pyramids
        for (int k = 0; k < 2; k++) 
        {
            printf(" ");
        }

        // l puts # sign for other pyramid
        for (int l = 0; l < i; l++) 
        {
            printf("#");
        }

        printf("\n");
    }
}
