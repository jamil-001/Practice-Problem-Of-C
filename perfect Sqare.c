/*#include<stdio.h>
int main(){
    int t,n,square;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        square=n*n)
    }
    return 0;
}*/
#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    int num;

    // Read an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the square root is an integer
    double sqrtNum = sqrt(num);
    if (sqrtNum == (int)sqrtNum) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
