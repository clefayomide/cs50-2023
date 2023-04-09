#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
string LETTERS[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int score = 0;

    // get word length
    int string_length = strlen(word);

    // get length of letters
    int letter_length = sizeof(LETTERS) / sizeof(LETTERS[0]);

    // loop through letters
    for (int i = 0; i < letter_length; i++)
    {
        // loop through word
        for (int j = 0; j < string_length; j++)
        {
            // checks if current index of word is same as current index of letters, OR, if current index of word is same as current index of letters in uppercase
            if (word[j] == *LETTERS[i] || word[j] == toupper(*LETTERS[i]))
            {
                // if condition is met, increment score with the appropriate point for the word index
                score = score + POINTS[i];
            }
        }
    }
    return score;
}
