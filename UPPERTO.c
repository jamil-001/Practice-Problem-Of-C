#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        if (n % 3 == 0) {
            printf("NO\n");
        } else {
            printf("YES\n");

            // Find a valid triplet
            int x, y, z;
            if (n % 3 == 1) {
                x = 1;
                y = 2;
                z = n - 3;
            } else {
                x = 1;
                y = 3;
                z = n - 4;
            }

            printf("%d %d %d\n", x, y, z);
        }
    }

    return 0;
}
