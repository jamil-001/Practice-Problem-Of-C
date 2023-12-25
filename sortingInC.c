/*
Step1: Take input in array
step2: First loop -> Set index
Step3: Second loop -> Check if the next elements are smaller
Step4: if index changed then swap
step5: Output sorted elements
*/
#include<stdio.h>
int main()
{
    int array[20],n,i,j,index,temp;

    printf("Total integers: ");
    scanf("%d",&n);

    printf("Enter Integers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(array[index]<array[j])
                index=j;
        }
        if(index!=i)
        {
            temp=array[i];
            array[i]=array[index];
            array[index]=temp;
        }
    }

    printf("Printing Sorted integers: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
