#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int rastgeleSayi = rand() % 1000 + 1;
    int tahmin;
    int choose = 1;

    printf("I have a number between 1 and 1000.\n");

    while (choose == 1) {
        printf("Can you guess my number?\n");
        printf("%d",rastgeleSayi);

        while (1) {
            printf("Please type your guess: ");
            scanf("%d", &tahmin);

            if (rastgeleSayi > tahmin) {
                printf("Too low. Try again.\n");
            } else if (rastgeleSayi < tahmin) {
                printf("Too high. Try again.\n");
            } else {
                printf("Excellent! You guessed the number.\n");
                break;
            }
        }

        printf("Would you like to play again? (1=yes, 2=no): ");
        scanf("%d", &choose);
        
        if (choose != 1 && choose != 2) {
            printf("Invalid choice. Please enter 1 for yes or 2 for no.\n");
            continue;
        }
    }

    printf("Thank you for playing. Goodbye!\n");

    return 0;
}
