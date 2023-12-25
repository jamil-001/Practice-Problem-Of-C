
#include<stdio.h>
double area(double base,double height){
       return 0.5*base*height;

}

int main(){
    double c,d,result;
    printf("Enter your number:\n");
    scanf("%lf %lf",&c,&d);
    result= area(c,d);
    printf("%lf\n",result);
}
