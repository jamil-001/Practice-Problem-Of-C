#include<stdio.h>
int main(){
    int i,j,row,col,uppersum=0,lowersum=0;
    int a[10][10];
    printf("Enter your rows & cols:\n");
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i<j)
                uppersum=uppersum+a[i][j];
            if(i>j)
                lowersum=lowersum+a[i][j];

        }
    }
    printf("uppersum= %d\nlowersum= %d\n",uppersum,lowersum);
    return 0;
}
