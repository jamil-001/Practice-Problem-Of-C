#include<stdio.h>
int main(){
    int data[5],sum=0,count=0;;
    int i;
    for(i=0;i<5;i++){
        scanf("%d",&data[i]);
    }
    for(i=0;i<5;i++){
        if(data[i]>100){
           printf("%d ",data[i]);
           sum=sum+data[i];
           count++;

        }
    }
    printf("sum is %d\n",sum);
    printf("this number %d\n",count);

    return 0;
}
