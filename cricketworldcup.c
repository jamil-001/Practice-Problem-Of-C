#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        // Calculate N based on the given conditions
        int N = 2 * Y - 1;

        printf("%d\n", N);
    }

    return 0;
}
