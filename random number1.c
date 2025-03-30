//12.	Write a C program that generates a random number between 1 and 10. Use a do-while loop to allow the user to guess the number. The loop should continue until the user guesses correctly.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, userGuess;

    
    srand(time(NULL));
    randomNumber = (rand() % 10) + 1; 

    printf("Guess a number between 1 and 10:\n");

    
    do {
        printf("Enter your guess: ");

       
        if (scanf("%d", &userGuess) != 1) {
            printf("Invalid input. Please enter a number between 1 and 10.\n");
            while (getchar() != '\n'); 
            continue;
        }

       
        if (userGuess < 1 || userGuess > 10) {
            printf("Out of range! Enter a number between 1 and 10.\n");
        } else if (userGuess < randomNumber) {
            printf("Your guess is low! Please guess greater number.\n");
        } else if (userGuess > randomNumber) {
            printf("Your guess is high ! Please guess smaller number.\n");
        }

    } while (userGuess != randomNumber);

    printf(" You guessed the correct number.\n");

    return 0;
}

/*
Output-

Guess a number between 1 and 10:
Enter your guess: 5
Your guess is low! Please guess greater number.
Enter your guess: 6
You guessed the correct number.

*/
