#include <stdio.h>
#include <cs50.h>

int main (void) {
    int height;

    do {
        height = get_int("Height: ");
    }
    while (height < 0 || height >= 8);

    for (int i = 0; i <= height; i++) {

        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        
        for (int k = 1; k <= i; k++) {
            printf("#");
        }

        printf(" ");

        for (int k = 1; k <= i; k++) {
            printf("#");
        }
        printf("\n");
    }
}
