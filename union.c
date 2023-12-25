#include<stdio.h>
union bankAccount{
    int accountno;
    char name[100];
    int acchostno;

}person1;
int main(){
    union bankAccount person1;

    printf("Enter your accountNO:\n ");
    scanf("%d",&person1.accountno);
    printf("Enter your name:\n");
    scanf("%s",person1.name);
    printf("Enter your AccountNo:\n");
    scanf("%d",&person1.acchostno);
    printf("Name: %s\n",person1.name);
    printf("AccountNo: %d\n",person1.accountno);
    printf("AccountHostNo: %d\n",person1.acchostno);
    return 0;
}
