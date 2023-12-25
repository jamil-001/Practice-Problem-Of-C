#include <stdio.h>
int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    printf("%d + %d = %d\n%d * %d = %d\n%d - %d = %d\n", X, Y, X+Y, X, Y, X*Y, X, Y, X-Y);
    return 0;
}
