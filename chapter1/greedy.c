#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
    {
    float owe;
    do
    {
    printf("How much do you owe?\n");
    owe = get_float();
    }
	while (owe < 0);

	int v;
	int count=0;

	owe = owe * 100;
	int x=round(owe);
	int balance = x;
	printf("%i\n", balance);

	while(balance >= 25)
   	 {
   		v = balance / 25;
    		count=count + v;
   		balance = balance - ( 25 * v);
    	}
	while(balance >= 10)
  	  {
   		v = balance / 10;
  		count = count + v;
    		balance = balance - (10* v);
  	  }
	while(balance >= 5)
  	  {
   		v = balance / 5;
  		count = count + v;
    		balance = balance - ( 5 * v);
   	 }
	while(balance >= 1)
   	 {
   		v = balance / 1;
   		count = count + v;
    		balance = balance - (1 * v);
   	 }
	printf("the number of coins needed is: %i\n", count);
}