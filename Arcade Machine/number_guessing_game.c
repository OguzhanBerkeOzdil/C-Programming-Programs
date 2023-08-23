#include "number_guessing_game.h"

void numberGuessingGame() {
    int computerGuess, userGuess, numberOfAttempts = 0;

    printf("\nI kept a number between 1 and 100. Try to guess!\n");

    srand(time(NULL));
    computerGuess = rand() % 101;

    do{
        printf("Please enter a number between 0 and 100: ");
        scanf("%d", &userGuess);

        do {
            if(userGuess < 0 || userGuess > 100){
                printf("You entered incorrectly, please enter a number between 0 and 100:");
                scanf("%d", &userGuess);
            }
        } while (userGuess < 0 || userGuess > 100);

        numberOfAttempts++;

        if (userGuess > computerGuess) {
            printf("Try a smaller number.\n");
        } else if (userGuess < computerGuess) {
            printf("Try a larger number.\n");
        } else {
            printf("\nCongratulations! You found the correct number on the %d attempt: ", numberOfAttempts);
        }

    } while (userGuess != computerGuess);

}