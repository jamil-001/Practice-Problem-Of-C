#include <stdio.h>

int main(void) {

    int x,y,n,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&x,&y);
    if(x>y){
        n=x+x-1;
    }else if(y>x){
        n=y+y-1;
    }
    printf("%d\n",n);
    }
	return 0;
}


