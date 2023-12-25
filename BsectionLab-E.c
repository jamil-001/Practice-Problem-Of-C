#include <stdio.h>
struct Player {
    int jerseyNumber;
    char name[101];
    int runsScored;
};

int main() {
    int N;
    scanf("%d", &N);
    struct Player players[N];
    for (int i = 0; i < N; i++) {
        scanf("%d %s %d", &players[i].jerseyNumber, players[i].name, &players[i].runsScored);
    }
    int highestRuns = -1;
    int highestRunsIndex = -1;

    for (int i = 0; i < N; i++) {
        if (players[i].runsScored > highestRuns) {
            highestRuns = players[i].runsScored;
            highestRunsIndex = i;
        }
    }
    printf("%d %s\n", players[highestRunsIndex].jerseyNumber, players[highestRunsIndex].name);

    return 0;
}
