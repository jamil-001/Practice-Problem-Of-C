#include<stdio.h>
float add(float a,float b){
      return a+b;
}
float sub(float a,float b){
      return a-b;
}
float multi(float a,float b){
      return a*b;
}
float divid(float a,float b){
      return a/b;
}
int main(){
    float num1,num2;
    scanf("%f %f",&num1,&num2);
    float addition = add(num1,num2);
    float substraction = sub(num1,num2);
    float multiply = multi(num1,num2);
    float division = divid(num1,num2);
    printf("addition = %.2f\nsubstraction = %.2f\nMulltiplication = %.2f\nDivition = %.2f",addition,substraction,multiply,division);

return 0;
}
