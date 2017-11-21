#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    int result = 0;
    long long isbn;

    printf("Enter a 10 digit ISBN code \n ");
     isbn = get_long_long();

    for (int i = 10; i >= 0; i--) {
        x = isbn % 10;
        result += (x * i);
        isbn = isbn / 10;
    }


    if (result % 11 == 0) {

        printf("YES\n");

        }
        else
        {

        printf("NO\n");

        }
}