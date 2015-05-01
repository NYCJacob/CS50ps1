#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;  // rows
    do
    {
    printf("Give me an integer between 0 - 23: ");
    height = GetInt();
    } while (height < 0 || height >= 24); 
    

    string topString = "##";
    string oneBlock = "#";
    int currHeight = height;
/*    printf("%s\n",topString);*/
    for (int i = 0; i < height; i++)    
    {
        currHeight--;
        for (int x = currHeight; x > 0; x--)
        {
        printf(" ");
        }
        
        printf("%s", topString);
        for (int c = 0; c < i; c++)
        {
          printf("%s", oneBlock);
        }
        printf("\n");

    }
    
}
