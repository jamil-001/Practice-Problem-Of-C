#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        if (n % 3 == 0) {
            // If n is divisible by 3, it's not possible to find a triplet
            printf("NO\n");
        } else {
            // If n is not divisible by 3, print a valid triplet
            printf("YES\n");

            // Choose the triplet based on whether n is 1 more or 2 more than a multiple of 3
            if (n % 3 == 1) {
                printf(" %d\n", n );
            } else {
                printf("%d\n", n);
            }
        }
    }

    return 0;
}

