#include<stdio.h>
int main(){
    int myarry[3][3];
    int i,j,sum=0;
    float avg;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&myarry[i][j]);
            printf("%d",myarry[i][j]);
        }
    }
    return 0;
}
