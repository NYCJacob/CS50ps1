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
}while (changeDue <=0);
float cents;
cents = changeDue*100;
/*printf("cents=changeDue*100 is %f\n", cents);*/
int intCents = round(cents);
/*printf("int of intCents = %d", intCents);*/
int coins = 0;
/*printf("%i cents are due!\n", intCents);*/

    coins+= intCents/25;
    intCents = intCents % 25;
    printf("coins= %d and intCoins = %d\n", coins, intCents);
    
    coins+=intCents/10;
    intCents= intCents%10;
    printf("at dimes coins= %d and intCoins = %d\n", coins, intCents);
    
    coins+= intCents/5;
    intCents = intCents%5;
    printf("at nickles coins= %d and intCoins = %d\n", coins, intCents);
    
    coins= coins + intCents;
    printf("%d", coins);

}  // end main
