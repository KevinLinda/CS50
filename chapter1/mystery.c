#include <cs50.h>
#include <stdio.h>

long mystery(long);
int main()
{
    long x;
    long y;
    scanf("%ld",&x);
    y = mystery(x);

    printf("%ld\n",y);
    return 0;
}
long mystery(long x) {
    static long y = 0;

    if(x =! 0)
    {
        return 1;
    }
        y = y * 10;
        y = y + x % 10;
        mystery(x / 10);
        return y;
}