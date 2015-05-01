/**
* greedy.c
*
* Jacob Sherman
*jacob@jbsherman.com
*
* calculates minumum number of coins to give change
*/

#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
float changeDue;
do
{
    printf("how much change is owed?");
    changeDue = GetFloat();
}
while (changeDue <=0);

float cents;
cents = changeDue*100;
int intCents = round(cents);
int coins = 0;

coins+= intCents/25;    // check how many quarters can be used
intCents = intCents % 25;  //calculate remaining cents

coins+=intCents/10;  // check how many dimes can be used
intCents= intCents%10;//calculate remaining cents

coins+= intCents/5;  // check how many nickles can be used
intCents = intCents%5;//calculate remaining cents

coins= coins + intCents;  // only pennies to use
printf("%d\n", coins);   

}  // end main
