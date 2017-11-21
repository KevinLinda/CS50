#include <cs50.h>
#include <stdio.h>
double x;
double y;
int main(void)
{
    printf("X: ");
    scanf("%lf", &x);
    printf("Y: ");
    scanf("%lf", &y);
    printf(" Addition %.1f\n Subtraction %.1f\n Multiplication: %.1f\n Divison: %.1f\n", x + y, x - y, x * y, x / y);
}
