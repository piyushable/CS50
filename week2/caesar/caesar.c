#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) {
    if (argc != 2) {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]);

    string plaintext = get_string("Plaintext: ");

    printf("Ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++) {

        char c = plaintext[i];

        if (isupper(c)) {
            printf("%c", ((c - 'A' + key) % 26) + 'A');
        }
        else if (islower(c)) {
            printf("%c", ((c - 'a' + key) % 26) + 'a');
        }
        else {
            printf("%c", c);

        }
    }
    printf("\n");
    return 0;
}
