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

while ( intCents >= 25)
{
    coins+= intCents/25;
    intCents = intCents % 25;

/*    printf("quarters given = %d  remaining cents = %d", coins, intCents);*/
}
while (intCents >=5)
{
    coins+=intCents/10;
    intCents= intCents%10;
/*    printf("dimes are coins = %d and change is now %d\n", coins, intCents);*/
    
    coins+= intCents/5;
    intCents = intCents%5;
    printf("cents after nickles: %d\n", intCents);
 }
/*printf("pennies %d\n", intCents);*/
coins+= intCents/1;
/*printf("coins used = %d\n", coins);*/
printf("%d", coins);

}  // end main
