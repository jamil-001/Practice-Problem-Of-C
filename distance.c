#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);

        int stations[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &stations[i]);
        }

        int max_distance = 0;

        // Calculate distances between gas stations and endpoints
        for (int i = 1; i < n; i++) {
            int distance = stations[i] - stations[i - 1];
            if (distance > max_distance) {
                max_distance = distance;
            }
        }

        // Consider the distance from the last gas station to the endpoint
        if (x - stations[n - 1] > max_distance) {
            max_distance = x - stations[n - 1];
        }

        printf("%d\n", max_distance);
    }

    return 0;
}

