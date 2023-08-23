#include <stdio.h>
#include "rock_paper_scissors.h"
#include "number_guessing_game.h"
#include "math_quiz.h"

int main() {
    int chooseGame;

    printf("Please choose a game you want to play: ");
    scanf("%d", &chooseGame);

    switch (chooseGame) {
        case 1:
            printf("\n--You've chosen Rock, Paper, Scissors game--\n\n");
            rockPaperScissors();
            break;
        case 2:
            printf("\n--You've chosen  Number Guessing game--\n");
            numberGuessingGame();
            break;
        case 3:
            printf("\n--You've chosen  Math Quiz game--\n");
            mathQuiz();
            break;

    }
    return 0;
}
