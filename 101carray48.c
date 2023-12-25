#include<stdio.h>
int main(){
    int data[5],even_sum=0,odd_sum=0;
    int i;
    for(i=0;i<5;i++){
        scanf("%d",&data[i]);
    }
    for(i=0;i<5;i++){
        printf("%d ",data[i]);
        if(data[i]%2== 0){
            even_sum=even_sum+data[i];
        }

        else
            odd_sum=odd_sum+data[i];
    }
    printf("Even sum is = %d\n",even_sum);
    printf("Odd Sum is = %d\n",odd_sum);
    return 0;
}
