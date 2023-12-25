#include<Stdio.h>
int main(){
    int x=10,y=20;
    int *p1,*p2;
    p1=&x;
    p2=&y;
    printf("%d%d\n",*p1,*p2);
    int temp;
    temp= *p1;
    *p1=*p2;
    *p2=temp;
    printf("%d %d\n",*p1,*p2);}
