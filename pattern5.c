#include <stdio.h>
int main() {
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("%c",col+64);
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("%c",col+64);
        }
        printf("\n");
    }
    return 0;
}
