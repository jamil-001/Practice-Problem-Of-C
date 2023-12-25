#include<stdio.h>
int main(){
    int w,x,y,z,large=0;
    printf("Enter three number\n");
    scanf("%d%d%d",&x,&y,&z);
    if(w>x && w>y && w>z)
        large=w;
   else if(x>y && x>z && x>w)
        large=x;
    else if(y>x && y>z && y>w)
        large = y;
    else if(z>x && z>y && z>w)
        large = z;
    printf("large number = %d\n",large);
    return 0;
}
