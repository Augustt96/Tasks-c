#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    // Ask for text
    string text = get_string("Text: \n");

    // Make ints for text length, letters, words and sentences
    int length = strlen(text);
    int letters = 0;
    int words = 1;
    int sentences = 0;


    for (int i = 0; i < length; i++)
    {

        // Count the letters
        if (isalpha(text[i]))
        {
            letters++;
        }


        // Count the words
        if (text[i] == ' ')
        {
            words++;
        }


        // Count the sentences
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }

    }

    // L is the average number of letters per 100 words in the text
    float L = ((float)letters / (float)words * 100);

    // S is the average number of sentences per 100 words in the text
    float S = ((float)sentences / (float)words * 100);


    // Count grade level
    int grade = round(0.0588 * L - 0.296 * S - 15.8);

    // For grade under 1
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }

    // For grade 16 and higher
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }

    // For grades from 1 to 15
    else
    {
        printf("Grade %i\n", grade);
    }

}