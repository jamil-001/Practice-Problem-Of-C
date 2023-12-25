#include<stdio.h>

struct name{
    int age;
    int id;
};
int main(){
  //int num = 5;
  //int *p = &num;

  struct name a,b,c;

  struct name *ptr = &a;
  struct name *ptr2 = &b;

  (*ptr).age = 5;//a.age = 5;
  (*ptr2).age = 10;//a.age = 5;

  printf("%d", a.age);
}
