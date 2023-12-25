#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);

        int gasStations[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &gasStations[i]);
        }

        int tankCapacity = gasStations[0] - 1; // Initial tank capacity

        for (int i = 1; i < n; i++) {
            int distance = gasStations[i] - gasStations[i - 1] - 1;
            tankCapacity -= distance; // Adjust tank capacity based on distance traveled
        }

        // Remaining distance to reach destination
        tankCapacity -= (x - gasStations[n - 1] - 1);

        printf("%d\n", tankCapacity * 2); // Multiply by 2 for the round trip
    }

    return 0;
}
