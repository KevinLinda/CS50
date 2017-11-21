#include <stdio.h>
#include <cs50.h>
int main(void)
{

    printf("What celcius you like to be converted to?\n");
    float celsius = get_float();
    float f = (1.8 * celsius) + 32;
    printf("Your fahrenheit is %.1f\n",f);
}