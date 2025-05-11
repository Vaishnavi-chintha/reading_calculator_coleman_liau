#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    //getting the text input
    string text = get_string("Text: ");
    int length = strlen("text");
    //declaring the var's
    int sentences = 0;
    int words = 1;
    int letters = 0;



//calculating string length
    for (int i = 0; i < strlen(text); i++)
    {
        //calculating letters
        if (isalpha(text[i]))
        {
            letters++;
        }
        //calculating words
        else if (text[i] == ' ')
        {
            words++;
        }
        //calculating scentences with !?.
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }

//Coleman-Liau index calculation
    float index = ((0.0588 * letters / words * 100)  - (0.296 * sentences / words * 100) - 15.8);
    //rounding off the above
    int calc = round(index);


    if (calc < 1)
    {
        //printing grade 1
        printf("Before Grade 1\n");
        return 0;
    }
    else if (calc > 16)
    {
        //printing grade 16+
        printf("Grade 16+\n");
        return 0;
    }
    else
    {
        //printing the grade
        printf("Grade %i\n", calc);
    }

}
