#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        srand(time(0));
        int randomnumber = (rand() % 100) + 1;
        int tries = 0;
        int guess;

        while (1)
        {
                printf("Guess a number between 1 and 100: ");
                scanf("%d", &guess);
                tries ++;
                if (guess > randomnumber)
                {
                        printf("Too high! Try again.\n");
                }
                else if (guess < randomnumber)
                {
                        printf("Too low! Try again.\n");
                }
                else if (guess == randomnumber)
                {
                        printf("Correct!\nU guess in %d tries!\n",tries);
                        break;
                }
        }       
        return 0;
}