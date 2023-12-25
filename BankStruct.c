#include<stdio.h>
struct nrbcbank{
       char name[20];
       int id;

};
int main(){
    struct nrbcbank customer1,customer2;
    printf("Enter customer1 Name:\n");
    scanf("%s",customer1.name);
    printf("Enter Customer2 Name:\n");
    scanf("%s",customer2.name);
    printf("Enter customer1 ID:\n");
    scanf("%d",&customer1.id);
    printf("Enter customer2 ID:\n");
    scanf("%d",&customer2.id);
    printf("Here are NRBC bank customer information\n");
    printf("Name:%s\nID:%d\n",customer1.name,customer1.id);
    printf("Name:%s\nID:%d\n",customer2.name,customer2.id);

    return 0;
}
