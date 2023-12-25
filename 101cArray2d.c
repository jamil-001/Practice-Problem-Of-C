#include<stdio.h>
int main(){
    int myarray[3][3];
    int i,j,sum=0;
    float avg;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&myarray[i][j]);
            sum=sum+myarray[i][j];
        }
    }
    avg=sum/9;
    printf("Average of value %.2f\n",avg);
    return 0;
}
