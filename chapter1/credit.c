#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long long i, add,z;
    int addsum,y, sum;

    do
    {
        printf("Your credit card number, please:\n");
        i = get_long_long();
    }
    while ( i < 0 );

    for ( add = i, addsum = 0; add > 0; add /= 100 )
        addsum += add % 10;

    for ( z = i / 10, y = 0; z > 0; z /= 100 )
    {
        if ( 2 * (z % 10) > 9 )
        {
            y += (2 * (z % 10)) / 10;
            y += (2 * (z % 10)) % 10;
        }
        else
            y += 2 * (z % 10);
    }

    sum = addsum + y;
    if ( sum % 10 == 0 )
    {
        if (i >= 340000000000000 && i < 350000000000000)
        {
            printf("AMERICAN EXPRESS\n");
        }
        else if(i >= 370000000000000 && i < 380000000000000)
        {
          printf("AMEX\n");
        }
        else if ( i >= 5100000000000000 && i < 5600000000000000 )
        {
            printf("MASTERCARD\n");
        }
        else if ( (i >= 4000000000000 && i < 5000000000000) || (i >= 4000000000000000 && i < 5000000000000000) )
        {
            printf("VISA\n");
        }
        else{
            printf("INVALID\n");
        }
    }
    else{
        printf("INVALID\n");
    }

    return 0;
}