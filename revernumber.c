#include<stdio.h>
struct time{
     int h,m,s;
};
int main(){
    struct time x1,x2;
    printf("Enter time 1\n");
    scanf("%d%d%d",&x1.h,&x1.m,&x1.s);
    printf("Enter time 2\n");
    scanf("%d%d%d",&x2.h,&x2.m,&x2.s);
    if(x1.h<=24 && x1.m<=60 && x1.s<=60&& x2.h<=24 && x2.m<= 60 && x2.s<=60 && x1.h>=0 &&
       x1.m>=0 && x1.s>=0 && x2.h>=0 && x2.m>= 0 && x2.s>=0){
            int time1=(x1.h*3600)+(x1.m*60)+(x1.s);
            int time2= (x2.h*3600)+(x2.m*60)+(x2.s);
            int d= time1-time2;
            if(d<0){
                d*=-1;
            }
            int tdh=d/3600;
            int tdm=(d%3600)/60;
            int tds= (d%3600)%60;
            printf("%d:%d:%d\n",tdh,tdm,tds);

    }else{
        printf("Invalid\n");

    }



return 0;
}
