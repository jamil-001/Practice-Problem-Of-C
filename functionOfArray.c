#include<stdio.h>
void display(int x[]){
     int i;
     for(i=0;i<5;i++){
        printf("%d ",x[i]);
     }
}
int main(){
    int s1[5];
    for(int i=0;i<5;i++){
        scanf("%d",&s1[i]);
    }
    display(s1);

    return 0;

}
