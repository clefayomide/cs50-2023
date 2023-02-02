#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// functions
// float get_regular();

// int main(void)
// {
//     printf("price is %.3f\n", get_regular());
// }

// float get_regular()
// {
//     float regular = get_float("enter regular price:");
//     float sales = regular * .50;
//     return sales;
// }

// arrays
//  int main(void)
//  {
//     int scores[4];
//     scores[0] = 1;
//     printf("%i\n", scores[0]);
//  }

// length of a string (reinvent the wheel)

// int main(void)
// {
//    string s = "hello";
//    int l = strlen(s);
//    printf("%i\n", l);
// }

// to uppercase

// int main(void)
// {
//    string s = get_string("Input: ");
//    int l = strlen(s);
//    for(int i = 0; i < l; i++)
//    {
//       printf("%c", toupper(s[i]) );
//    }
//    printf("\n");
// }

// accepting command line prompt

// int main(int argc, string argv[])
// {
//    if(argc == 2 )
//    {
//    printf("hello %s\n", argv[1]);
//    }
//    else
//    {
//       printf("hello world\n");
//    }
// }

// set array element dynamically

// int main(void)
// {
//    int number[100];

//    for(int i = 0; i <= 100; i++)
//    {
//       number[i] = i;
//    }

//    for(int i = 0; i <= (sizeof(number) / sizeof(number[0])); i++)
//    {
//       printf("%i\n", number[i]);
//    }
// }

// check for repeated character in a string

// int main(void)
// {
//    string sentence = "helo";

//    for (int i = 0; i < strlen(sentence); i++)
//    {
//       for (int j = i + 1; j < strlen(sentence); j++)
//       {
//          if (sentence[i] == sentence[j])
//          {
//             printf("Repetition detected\n");
//             return 1;
//          }
//       }
//       printf("No Repetition\n");
//       return 0;
//    }
// }

// creating a data type

typedef struct
{
   string name;
   int age;
} person;

int main(void)
{
   person people[2];
   people[0].name = "David";
   people[0].age = 24;

   people[1].name = "Melan";
   people[1].age = 34;

   string s = get_string("Name: ");
   int people_length = sizeof(people) / sizeof(people[0]);

   for (int i = 0; i < people_length; i++)
   {
      if (strcasecmp(people[i].name, s) == 0)
      {
         printf("found: %i\n", people[i].age);
         return 0;
      }
   }
   printf("not found\n");
   return 1;
}