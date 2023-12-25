#include <stdio.h>
int main() {
    float n;
    scanf("%f", &n);
    int integer_part = (int)n;
    double decimal_part = n - integer_part;

    if (decimal_part == 0) {
        printf("int %d\n", integer_part);
    } else {
        printf("float %d %.3f\n", integer_part, decimal_part);
    }
    return 0;
}
