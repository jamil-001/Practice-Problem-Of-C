#include<stdio.h>

double triangle(double b,double h){
       return 0.5*b*h;
}
int main(){
    double base,height;
    scanf("%lf %lf",&base,&height);
    double area = triangle(base,height);
    printf("%lf",area);
    return 0;
}
