#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    do
    {
        printf("Guess the number:\n");
        scanf("%d", &guessed_number);
        if (guessed_number > random_number)
        {

            printf("Lower number please!\n");
        }
        else if(guessed_number<random_number)
        {
            printf("Higher number please:\n");
        }
        no_of_guesses++;
    } while (guessed_number != random_number);
    

    printf("You have guessed the number in %d guesses\n", no_of_guesses);

    return 0;
}
