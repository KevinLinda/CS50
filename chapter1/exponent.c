#include <stdio.h>
#include <cs50.h>
#include <math.h>
int calc(int base, int x);
int main()
    {
        printf("%i",calc(2,3));

    }
int calc(int base, int x){

    int result = 1;
    for(int i = 0;i < x;i++)
        {
            result = result * base;
        }
        return result;
}
