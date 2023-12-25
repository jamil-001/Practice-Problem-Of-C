#include<stdio.h>
int main(){
    int x,y;
    x=10;y=20;
    int *p1,*p2;
    *p1=&x;
    *p2=&y;
    pritnf("%d\n",*p1);
    pritnf("%d\n",*p2);
    return 0;
}
