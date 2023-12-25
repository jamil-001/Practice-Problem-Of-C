#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        // If n is divisible by 3, Vanya wins
        if (n % 3 == 0) {
            printf("First\n");
        } else {
            // If n is not divisible by 3, Vova wins if (n-1) is divisible by 3
            if ((n - 1) % 3 == 0) {
                printf("Second\n");
            } else {
                // If (n-1) is not divisible by 3, Vova wins
                printf("First\n");
            }
        }
    }

    return 0;
}
