#include <cs50.h>
#include <stdio.h>

int cal_year(int start, int end);

int main(void)
{
    // TODO: Prompt for start size
    int start_size;

    // TODO: Prompt for end size
    int end_size;

    do
    {
     start_size = get_int("enter start size: ");  
    } while (start_size < 9);

    do
    {
     end_size = get_int("enter end size: "); 
        
    } while (end_size < start_size);
    
    

    // TODO: Calculate number of years until we reach threshold
   int years = cal_year(start_size, end_size);

    // TODO: Print number of years
    printf("%i\n", years);
}

 int cal_year(int start, int end)
    {
        int growth = start;
        int years = 0;

        do
        {
            if(start == end)
            {
                years = 0;
            }
            else
            {
                int gain = growth / 3;
                int loss = growth / 4;
                int new_addition = gain - loss;
                growth = growth + new_addition;
                years = years + 1;
            }
        } while (growth < end);
        
     return years;   
    }
