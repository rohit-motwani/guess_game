#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ------------------- Guessing number game ------------------
int main()
{
    int number,guess,number_of_guess=1;
    srand(time(0));
    number=rand()%100 + 1;
    do
    {
        printf("Guess the number from 1 to 100 : ");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("\nGuess some lower value \n");
        }
        else if(guess<number)
        {
            printf("\nGuess some higher value \n");
        }
        else
        {
            printf("\nYou guessed correctly in %d times",number_of_guess);
        }
        number_of_guess++;
    }while(number!=guess);
}