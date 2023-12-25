#include<stdio.h>
int main(){
    int n,row,col;
    printf("Enter number:\n");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            printf("%c",row+64);
        }
        printf("\n");
    }
}
