#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // for sleep function

// Function to roll a six-sided die and return the result
int rollDice() {
    return rand() % 6 + 1;
}

// Function to simulate the Snake and Ladder game
void playGame() {
    int player1 = 0, player2 = 0, dice;

    while (1) {
        // Player 1's turn
        printf("\nPlayer 1's turn: Press Enter to roll the dice.");
        getchar(); // Wait for user to press Enter
        dice = rollDice();
        printf("Player 1 rolled a %d.\n", dice);
        player1 += dice;

        // Check for snakes and ladders
        if (player1 == 98) {
            printf("Oops! Snake at position 98. Player 1 goes down to position 78.\n");
            player1 = 78;
        } else if (player1 == 95) {
            printf("Oops! Snake at position 95. Player 1 goes down to position 75.\n");
            player1 = 75;
        } else if (player1 == 92) {
            printf("Oops! Snake at position 92. Player 1 goes down to position 88.\n");
            player1 = 88;
        } else if (player1 == 83) {
            printf("Oops! Snake at position 83. Player 1 goes down to position 22.\n");
            player1 = 22;
        } else if (player1 == 46) {
            printf("Oops! Snake at position 46. Player 1 goes down to position 5.\n");
            player1 = 5;
        } else if (player1 == 17) {
            printf("Yay! Ladder at position 17. Player 1 climbs up to position 69.\n");
            player1 = 69;
        } else if (player1 == 9) {
            printf("Yay! Ladder at position 9. Player 1 climbs up to position 31.\n");
            player1 = 31;
        }

        printf("Player 1 is now at position %d.\n", player1);

        // Check if Player 1 has won
        if (player1 >= 100) {
            printf("Player 1 wins!\n");
            break;
        }

        // Introduce a delay for better visibility
        sleep(1);

        // Player 2's turn
        printf("\nPlayer 2's turn: Press Enter to roll the dice.");
        getchar();
        dice = rollDice();
        printf("Player 2 rolled a %d.\n", dice);
        player2 += dice;

        // Check for snakes and ladders
        if (player2 == 98) {
            printf("Oops! Snake at position 98. Player 2 goes down to position 78.\n");
            player2 = 78;
        } else if (player2 == 95) {
            printf("Oops! Snake at position 95. Player 2 goes down to position 75.\n");
            player2 = 75;
        } else if (player2 == 92) {
            printf("Oops! Snake at position 92. Player 2 goes down to position 88.\n");
            player2 = 88;
        } else if (player2 == 83) {
            printf("Oops! Snake at position 83. Player 2 goes down to position 22.\n");
            player2 = 22;
        } else if (player2 == 46) {
            printf("Oops! Snake at position 46. Player 2 goes down to position 5.\n");
            player2 = 5;
        } else if (player2 == 17) {
            printf("Yay! Ladder at position 17. Player 2 climbs up to position 69.\n");
            player2 = 69;
        } else if (player2 == 9) {
            printf("Yay! Ladder at position 9. Player 2 climbs up to position 31.\n");
            player2 = 31;
        }

        printf("Player 2 is now at position %d.\n", player2);

        // Check if Player 2 has won
        if (player2 >= 100) {
            printf("Player 2 wins!\n");
            break;
        }

        // Introduce a delay for better visibility
        sleep(1);
    }
}

int main() {
    // Seed for random number generation
    srand(time(NULL));

    printf("Welcome to Snake and Ladder Game!\n");
    printf("Rules:\n");
    printf("- The first player to reach or exceed 100 wins.\n");
    printf("- Snakes and ladders affect your position.\n");

    // Start the game
    playGame();

    return 0;
}
