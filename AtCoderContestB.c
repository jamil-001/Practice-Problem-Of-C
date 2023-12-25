#include <stdio.h>

int main() {
    int N, L, R;

    // Input: N, L, R
    scanf("%d %d %d", &N, &L, &R);

    // Input: A array
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Output: Find Xi and print
    for (int i = 0; i < N; i++) {
        // Calculate Xi based on conditions
        int Xi = (A[i] < L) ? L : (A[i] > R) ? R : A[i];

        // Print Xi
        printf("%d ", Xi);
    }

    return 0;
}

