#include<stdio.h>
struct student{
      int id;
      float cgpa;
      char name[20];
};
int main(){
    struct student s1;
    printf("Enter your id\n");
    scanf("%d",&s1.id);
    printf("Enter your cgpa\n");
    scanf("%f",&s1.cgpa);
    printf("Enter your name\n");
    scanf("%s",s1.name);
    printf("id = %d\ncgpa = %f\nname = %s",s1.id,s1.cgpa,s1.name);

    return 0;
}
