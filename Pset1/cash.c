#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    int coins = 0;
    
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0.00);
    
    int cents = round(change * 100);
    int cents_left = cents;

    while (cents_left >= 25)
    {
        cents_left -= 25;
        coins++;
    }
    while (cents_left >= 10)
    {
        cents_left -= 10;
        coins++;
    }
    while (cents_left >= 5)
    {
        cents_left -= 5;
        coins++;
    }
    while (cents_left >= 1)
    {
        cents_left -= 1;
        coins++;
    }
    printf("%i\n", coins);
}