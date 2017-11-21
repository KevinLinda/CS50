#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string colour = "";
    string goal = "";
    int age;
    double height;

    printf("What is your favorite colour?\n");
    colour = get_string();
    printf("What is your goal in life?\n");
    goal = get_string();
    printf("What is your age\n");
    age = get_int();
    printf("What is your height?\n");
    height = get_float();
    printf("Your favorite colour is %s.Your life goal is %s you are %d years old , and you are %.1f\n" ,
           colour, goal, age, height);

}
