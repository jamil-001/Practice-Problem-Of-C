#include<stdio.h>
int main(){
    int i,j,row,col;
    int a[10][10],transpose[10][10];
    printf("Enter row and colum:\n");
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
                printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            transpose[j][i]=a[i][j];
        }
    }
    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
           printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
