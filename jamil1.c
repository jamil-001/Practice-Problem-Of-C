#include<stdio.h>
struct name{
      int age;
      int id;

};
int main(){
    struct name jamil,kamil;
    struct name *ptr=&jamil;
    struct name *ptr2=&jamil;
    scanf("%d %d",&jamil.age,&kamil.age);
    (*ptr).age;
    (*ptr2).age;

    printf("%d %d\n",jamil.age,kamil.age);

    return 0;
}
