#include "rock_paper_scissors.h"


void rockPaperScissors() {
    int computerSelection, userSelection;

    do{
    printf("\nPlease Select (1) for Rock, (2) for Paper, select (3) for Scissor:  ");
    scanf("%d", &userSelection);

    if (userSelection < 1 || userSelection > 3) {
        printf("Invalid selection! Please enter a number between 1-3.\n");
    }
} while (userSelection < 1 || userSelection > 3 );

    srand(time(NULL));
    computerSelection = rand() % 3 + 1;

    printf("\nComputer selection: ");
    switch (computerSelection) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissor\n");
            break;
    }

    printf("User selection: ");
    switch (userSelection) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissor\n");
            break;
    }

    if (userSelection == computerSelection) {
        printf("\nIt's draw!");
    } else if (userSelection == 1 && computerSelection == 3 || userSelection == 2 && computerSelection == 1 ||
               userSelection == 3 && computerSelection == 2) {
        printf("\nYou won!");
    } else {
        printf("\nComputer Won!");
    }
}