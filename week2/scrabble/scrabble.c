#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int findScore(string word);

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main (void) {

    string s1 = get_string("Player 1's turn: ");
    string s2 = get_string("Player 2's turn: ");

    int score1 = findScore(s1);
    int score2 = findScore(s2);

    if (score1 > score2) {
        printf("Player 1 wins\n");
    }
    else if (score2 > score1) {
        printf("Player 2 wins\n");
    }
    else {
        printf("TIE\n");
    }
}

int findScore(string word) {

    int score = 0;

    for (int i = 0, n = strlen(word); i < n; i++) {
        if (isalpha(word[i])) {
            int index = toupper(word[i] - 'A');
            score += points[index];
        }

    }
    return score;

}
