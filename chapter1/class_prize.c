#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = 0;
    string array[5] = {"Bob","Rob","Sob","Nob","Noob"};
    for(int i = 0;i < 5; i++ ){
        printf("%s \n",array[i]);
    }
    printf("Who do you want to be the winner 1-5(Top being the very top and 5 being the last name)?\n");
    x = get_int();
    printf("%s is the WINNER!! YAYAYAYAYAYAY !\n",array[x - 1]);
}