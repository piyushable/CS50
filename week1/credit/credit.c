#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number = get_long("Number: ");
    long temp = number;
    int sum = 0;
    int count = 0;
    int digit;

    while (temp > 0)
    {
        digit = temp % 10;

        if (count % 2 == 0)
        {
            sum += digit;
        }
        else
        {
            int doubled = digit * 2;
            sum += (doubled % 10) + (doubled / 10);
        }

        temp /= 10;
        count++;
    }

    long start = number;
    while (start >= 100)
    {
        start /= 10;
    }

    if (sum % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if ((start == 34 || start == 37) && count == 15)
    {
        printf("AMEX\n");
    }
    else if (start >= 51 && start <= 55 && count == 16)
    {
        printf("MASTERCARD\n");
    }
    else if ((start / 10 == 4) && (count == 13 || count == 16))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
