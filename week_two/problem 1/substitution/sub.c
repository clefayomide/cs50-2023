#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void do_cipher(string key);

int main(int argc, string argv[])
{
    // checks if two command was enter
    if (argc == 2)
    {
        // get length of key
        int arg_length = strlen(argv[1]);

        // if length is not == 26 return
        if (arg_length != 26)
        {
            printf("Key must contain 26 characters\n");
            return 1;
        }
        else
        {
            // checks if key is alphabetic
            for (int i = 0; i < arg_length; i++)
            {
                if (!isalpha(argv[1][i]))
                {

                    printf("Key must be alphabetical\n");
                    return 1;
                }

                if (!isupper(argv[1][i]))
                {
                    printf("Key must be uppercase\n");
                    return 1;
                }

                for (int j = i + 1; j < arg_length; j++)
                {
                    if (argv[1][i] == argv[1][j])
                    {
                        printf("repetition detected in key\n");
                        return 1;
                    }
                }
            }
            // performs cipher
            do_cipher(argv[1]);
        }
    }
    else
    {
        printf("Usage: ./sub key\n");
        return 1;
    }
}

void do_cipher(string key)
{
    string plain_text = get_string("plain text: ");
    printf("cipher text: ");

    for (int i = 0; i < strlen(plain_text); i++)
    {
        if (isupper(plain_text[i]))
        {
            printf("%c", toupper(key[plain_text[i] - 65]));
        }

        else if (islower(plain_text[i]))
        {
            printf("%c", tolower(key[plain_text[i] - 97]));
        }

        else
        {
            printf("%c", plain_text[i]);
        }
    }

    printf("\n");
}