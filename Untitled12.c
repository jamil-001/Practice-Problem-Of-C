
#include <stdio.h>

int main() {
    // The number of test cases
    int t;
    scanf("%d", &t);

    // Loop through each test case
    for (int i = 0; i < t; i++) {
        // Read the input
        int n;
        scanf("%d", &n);

        // Initialize the current integer to n
        int current = n;

        // Initialize the player's turn
        int player = 1;

        // Loop for 10 moves
        for (int j = 0; j < 10; j++) {
            // Check if the current integer is divisible by 3
            if (current % 3 == 0) {
                // If the current player is Vanya, he wins
                if (player == 1) {
                    printf("First\n");
                } else {
                    printf("Second\n");
                }
                break;
            }

            // Add or subtract 1 to the current integer depending on the player's turn
            if (player == 1) {
                current++;
            } else {
                current--;
            }

            // Change the player's turn
            player = 3 - player;
        }

        // If 10 moves have passed and the game is still not over, Vova wins
        if (j == 10) {
            printf("Second\n");
        }
    }

    return 0;
}
