#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A > B){
        int temp = A;
        A = B;
        B = temp;
    }
    if (B > C){
        int temp = B;
        B = C;
        C = temp;
    }
    if (A > B){
        int temp = A;
        A = B;
        B = temp;
    }
    printf("%d\n%d\n%d\n",A,B,C);

    return 0;
}

