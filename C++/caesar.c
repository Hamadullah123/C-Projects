#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, string argv[])
{
    // Make sure the program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n"); // int a = cin >> "enter something";, cout << "koi bhi";
        return 1;
    }

    // Ensure the key is a digit
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert the key from a string to an integer
    int k = atoi(argv[1]);

    // Get the plaintext from the user
    string plaintext = get_string("plaintext: ");

    // Print the ciphertext
    printf("ciphertext: ");
    for (int j = 0; j < strlen(plaintext); j++)
    {
        if (isupper(plaintext[j]))
        {
            printf("%c\n", (plaintext[j] - 'A' + k) % 26 + 'A');
        }
        else if (islower(plaintext[j]))
        {
            printf("%c\n", (plaintext[j] - 'a' + k) % 26 + 'a');
        }
        else
        {
            printf("%c\n", plaintext[j]);
        }
    }
    return 0;
}
