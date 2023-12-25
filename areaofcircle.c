#include<stdio.h>
int main(){
    double num;
    scanf("%lf",&num);
    double pi=3.14159265359,area,circumference;
    area = pi*num*num;
    circumference = 2*pi*num;
    printf("%.6lf %.6lf\n",area,circumference);
    return 0;
}
