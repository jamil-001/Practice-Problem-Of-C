#include<stdio.h>

union bankAccount  {
    int AccointNo;
    char AccountHolderName[100];
    int HostPhoneNo;

};
int main (){
  union bankAccount person1, person2;

  scanf("%d", &person1.AccointNo);
  printf("Person 1 Account Number: %d\n", person1.AccointNo);
  scanf("%s", person2.AccountHolderName);
  printf("Person 2 Name: ");
  puts(person2.AccountHolderName);
}
