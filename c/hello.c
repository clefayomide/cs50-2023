// #include <stdio.h>
// #include <cs50.h>
// #include <string.h>
// #include <ctype.h>
// #include <stdlib.h>

// int main(void){
//     printf("hello People");
// }

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

// typedef struct
// {
//    string name;
//    int age;
// } person;

// int main(void)
// {
//    person people[2];
//    people[0].name = "David";
//    people[0].age = 24;

//    people[1].name = "Melan";
//    people[1].age = 34;

//    string s = get_string("Name: ");
//    int people_length = sizeof(people) / sizeof(people[0]);

//    for (int i = 0; i < people_length; i++)
//    {
//       if (strcasecmp(people[i].name, s) == 0)
//       {
//          printf("found: %i\n", people[i].age);
//          return 0;
//       }
//    }
//    printf("not found\n");
//    return 1;
// }

// // sort an array
// bubble sort

// int main(void)
// {
//    int arr[] = {10, 50, 5, 30, 76, 100, 47, 88, 0, 67, 94, 500, 38, 22, 60, 55, 44, 99, 102};
//    int arr_length = sizeof(arr) / sizeof(arr[0]);

//    printf("Unsorted: ");
//    for (int i = 0; i < arr_length; i++)
//    {
//       printf("%i,", arr[i]);
//    }
//    printf("\n");

//    for (int i = 0; i < arr_length; i++)
//    {
//       for (int j = i + 1; j < arr_length; j++)
//       {
//          if (arr[i] > arr[j])
//          {
//             int small_int = arr[j]; // smallest integer
//             int big_int = arr[i];   // bigger integer

//             arr[i] = small_int; // shift smaller integer to index i
//             arr[j] = big_int;   // shift bigger integer to index j
//          }
//       }
//    }

//    printf("Sorted:   ");
//    for (int i = 0; i < arr_length; i++)
//    {
//       printf("%i,", arr[i]);
//    }
//    printf("\n");
// }

// pointer

// int main (void)
// {
//     int number = 50;
//     int *p = &number;

//     int **q = &p;

//     printf("%i\n", *p);
//     printf("%p\n", q);
// }

// memory allocation

// int main(void)
// {
//     string s = get_string("S: ");
//     int length = strlen(s);

//     string t = malloc(length + 1);

//     for (int i = 0; i < length; i++)
//     {
//         t[i] = s[i];
//     }

//     printf("%s\n", t);

//     free(t);
// }

// void swap(int *a, int *b);

// int main(void)
// {
//     int a = 1;
//     int b = 2;

//     printf("a is: %i and b is: %i\n", a, b);
//     swap(&a, &b);
//     printf("a is: %i and b is: %i\n", a, b);
// }

// void swap(int *a, int *b)
// {
//     int initial_a_value = *a;
//     *a = *b;
//     *b = initial_a_value;
//  }

// void change(string *address);
// int main(void)
// {
//     string greeting = "hello";
//     printf("%s\n", greeting);
//     change(&greeting);
//     printf("%s\n", greeting);
// }

// void change(string *address)
// {
//     *address = "hello world";
// }

// recursion
// int fact(int n);

// int main(void)
// {
//     printf("%i\n", fact(5));
// }

// int fact(int n)
// {
//     if (n == 1)
//         return 1;
//     else
//         return n * fact(n - 1);
// }

// read file

// int main(void)
// {
//     FILE *file = fopen("board.txt", "r");
//     string text;
//     fgets(text, (sizeof(string) * 2), file);
//     printf("%s\n", text);
//     // printf("%s\n", text[0]);
//     // fprintf(file, "hello people\n");
//     // fclose(file);
// }
