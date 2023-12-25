#include<stdio.h>
typedef struct{
        int id;
        float cgpa;
        char name[20];
} student;
int main(){
    student s1;
    printf("Enter your id\n");
    scanf("%d",&s1.id);
    printf("Enter your cgpa\n");
    scanf("%f",&s1.cgpa);
    printf("Enter your name\n");
    scanf("%s",s1.name);
    printf("id = %d\n cgpa = %f\n name = %s\n",s1.id,s1.cgpa,s1.name);
    return 0;
}
