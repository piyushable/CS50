#include <stdio.h>
#include <cs50.h>

int main(void) {
    const int penny = 1;
    const int nickel = 5;
    const int dime = 10;
    const int quarter = 25;
    const int dollar = 100;


    int coins = 0;

    int owed = get_int("Change Owed: ");

    if (owed < dollar){
        while (owed >= quarter) {
            owed -= quarter;
            coins++;
    }
        while (owed >= dime) {
            owed -= dime;
            coins++;
    }
        while (owed >= nickel) {
            owed -= nickel;
            coins++;
    }
        while (owed >= penny) {
            owed -= penny;
            coins++;
    }

    printf("%i\n", coins);
    }

}
