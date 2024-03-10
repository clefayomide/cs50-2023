#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int calc_letter(string word);
int calc_sentence(string word);
int calc_word(string word);
int calc_grade(int letters, int sentences, int words);

int main(void)
{
    string text = get_string("Enter text: ");
    int total_letter = calc_letter(text);
    int total_sentence = calc_sentence(text);
    int total_word = calc_word(text);
    int grade = calc_grade(total_letter, total_sentence, total_word);

    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if(grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else {
        printf("Grade %i\n", grade);
    }
}

int calc_letter(string word)
{
    int total = 0;
    int str_length = strlen(word);

    for(int i = 0; i < str_length; i++)
    {
        if(isalpha(word[i]))
        {
            total = total + 1;
        }
    }
    return total;
}

int calc_sentence (string word)
{
    int total = 0;
    int str_length = strlen(word);

    for(int i = 0; i < str_length; i++)
    {
        char s = word[i];
        if(s == '.' || s == '!' || s == '?')
        {
            total = total + 1;
        }
    }
    return total + 1;
}

int calc_word (string word)
{
    int total = 0;
    int str_length = strlen(word);
    for(int i = 0; i < str_length; i++)
    {
        char s = word[i];
        if(s == ' ')
        {
            total = total + 1;
        }
    }

    return total;
}

int calc_grade (int letters, int sentences, int words)
{
    float L = ((float)letters / (float)words) * 100;
    float S = ((float)sentences / (float)words) * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int toInt = round(index);
    return toInt;
}