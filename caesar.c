#include <string.h>
#include <cs50.h>
#include <stdio.h> // For print function
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[])
{
// Checks for two arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

// Checks for digits
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]) == false)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

// Make key as int
    int k = atoi(argv[1]);

// Gets plain text from user
    string plaintext = get_string("plaintext: ");


    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        // Lower letters
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            printf("%c", ((((plaintext[i] - 'a') + k) % 26) + 'a'));
        }
        // Upper letters
        else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            printf("%c", ((((plaintext[i] - 'A') + k) % 26) + 'A'));
        }
        //Other letters
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}


