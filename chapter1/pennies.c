#include <cs50.h>
#include <stdio.h>
int days = 0;
long amount = 0;
long pennies(int days, long amount)
{
    if (days == 1)
    {
        return amount;
    }
    return amount + pennies(days - 1, amount * 2);
}
int main(days,amount)
{
    while (days < 28 || days > 31)
    {
        printf("Number of days: ");
        days = get_int();
    }
    while (amount < 1)
    {
        printf("Amount on first day: ");
        amount = get_long();
    }
    printf("$%.2f\n", (double)pennies(days, amount) / 100);
}
