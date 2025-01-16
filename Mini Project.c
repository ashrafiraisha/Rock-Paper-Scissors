#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    char playAgain;

    srand(time(0));

    do {

        printf("Enter your choice:\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Your choice: ");
        scanf("%d", &userChoice);


        computerChoice = rand() % 3 + 1;


        printf("You chose: ");
        if (userChoice == 1) {
            printf("Rock\n");
        } else if (userChoice == 2) {
            printf("Paper\n");
        } else if (userChoice == 3) {
            printf("Scissors\n");
        } else {
            printf("Invalid choice!\n");
            continue;
        }

        printf("Computer chose: ");
        if (computerChoice == 1) {
            printf("Rock\n");
        } else if (computerChoice == 2) {
            printf("Paper\n");
        } else {
            printf("Scissors\n");
        }


        if (userChoice == computerChoice) {
            printf("It's a tie!\n");
        } else if ((userChoice == 1 && computerChoice == 3) ||
                   (userChoice == 2 && computerChoice == 1) ||
                   (userChoice == 3 && computerChoice == 2)) {
            printf("You win!\n");
        } else {
            printf("Computer wins!\n");
        }

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing! Goodbye!\n");
    return 0;
}
