#include <stdio.h>
#include <math.h>

int main() {
    // Read input
    long long D;
    scanf("%lld", &D);

    // Find minimum value of |x^2 + y^2 - D|
    long long x = 0, y = 0;
    long long min_diff = llabs(x*x + y*y - D);

    for (x = 0; x * x <= D; x++) {
        y = llround(sqrt(D - x*x));
        min_diff = fmin(min_diff, llabs(x*x + y*y - D));
        min_diff = fmin(min_diff, llabs(x*x + (y+1)*(y+1) - D));
    }

    // Print the result
    printf("%lld\n", min_diff);

    return 0;
}
