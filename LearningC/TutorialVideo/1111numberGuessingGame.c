#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int guess;

    int guessAm = 0;

    do{
        guessAm += 1;

        printf("Take a guess!\n");
        scanf("%d", &guess);

        if (guess < randomNumber){
            printf("Too small_\n");
        }
        else if (guess > randomNumber)
        {
            printf("Too big^\n");
        }
        else if (guess == -1)
        {
            break;
        }
        
        

    }while(guess != randomNumber);

    printf("---------------\nGJ you guessed it\nThe number was %d\nIt took you %d guesses", randomNumber, guessAm);

    return 0;
}
