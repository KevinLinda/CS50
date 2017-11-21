#include <stdio.h>
#include <cs50.h>
int main(int argc, string argv[])
{

    if(argc == 2){
        float celsius = atof(argv[1]);
        float f = (1.8 * celsius) + 32;
        printf("C:%f\n",celsius);
        printf("F : %.1f\n",f);
        return 0;
    }
    else{
        return 1;
    }
}