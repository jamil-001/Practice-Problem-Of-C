#include<stdio.h>
struct person{
      char name[20];
      int age;
      float salary;
};
int main(){
    struct person person1;

    person1.name="Jamil";
    person1.age=22;
    person1.salary=24000;

    printf("name = %s \nage= %d\n salary = %f",person1.name,person1.age,person1.salary);

    return 0;
}
