#include<stdio.h>
#include<cs50.h>
int main (void)
{
    int height;
    int count = 0;
    do{
        printf("What is your desire height?\n");
        height = get_int();
    }
    while (height < 0 || height > 23);
    for (int i = height; i > 0; i--)
    {
        for (int z = 0; z < i - 1; z++)
        {
        printf(" ");z
        }
        printf("#");
        count++;
        for (int x = 0; x < count; x++)
        {
            printf("#");
        }
        printf("\n");
    }
}