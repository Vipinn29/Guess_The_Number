#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int n, guess, nguesses = 1;
    srand(time(0));
    n = rand() % 100;
    // printf("The no. is %d\n", n);
    printf("Guess the no. between 1 to 100.\n");
    do
    {
        scanf("%d", &guess);
        if (n < guess)
        {
            printf("Lower value please!\n");
        }
        else if (n > guess)
        {
            printf("Higher value please!\n");
        }
        else
        {
            printf("Congrats! You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (n != guess);