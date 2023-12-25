#include<stdio.h>
int main(){
    float celciaus,farenhight;
    printf("Enter your number\n");
    scanf("%f",&celciaus);
    farenhight = 1.8*celciaus + 32;
    printf("farenhight is = %.2f\n",farenhight);
    return 0;
}
