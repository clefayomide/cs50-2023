#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    string staircase = "#";
    int height = get_int("Enter a height between 1 - 8 ");
    while (height < 1 || height > 8)
    {
        printf("i said from 1 - 8, BUDDY!\n");
        height = get_int("Enter a height between 1 - 8 ");
    }

    // loop to iterate through the height
    for (int i = 0; i < height; i++)
    {
        // determine amount of soace
        for(int j = 0; j < height - (i + 1); j++)
        {
            printf(" ");
        }

        // determine number of #
        for(int k = 0; k < i + 1; k++)
        {
            printf("%s", staircase);
        }
        
        // line break
        printf("\n");
    }    
}