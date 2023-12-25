#include <stdio.h>

int main() {
    long long int A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    long long int product = A * B * C * D;
    if (product >= 1000000000) {
        printf("00\n");
    } else {
        int lastTwoDigits = product % 100;
        printf("%02d\n", lastTwoDigits);
    }

    return 0;
}
