#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int time = get_int("Enter a number ");
    while (time < 1 || time > 8)
    {
        printf("Must be in the range of 1 - 8\n");
        time = get_int("Enter a number ");
    }

    for(int i = 0; i < time; i++)
    {
        for(int j = 0; j < time - (i + 1); j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
            printf("  ");
        for(int l = 0; l < (i + 1); l++)
        {
            printf("#");
        }
    printf("\n");
    }
    
}