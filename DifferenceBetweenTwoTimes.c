#include<stdio.h>
struct date{
       int hour;
       int munite;
       int second;
};
int main(){
    struct date day1,day2;
    printf("Enter hour,munite,second\n");
    scanf("%d%d%d",&day1.hour,&day1.munite,&day1.second);
    printf("%d: %d: %d\n",day1.hour,day1.munite,day1.second);

    printf("Enter hour,munite,second by day2\n");
    scanf("%d%d%d",&day2.hour,&day2.munite,&day2.second);
    printf("%d:%d:%d\n",day2.hour,day2.munite,day2.second);
    printf("Difference between two times\n");
    printf("%d: %d: %d\n",day1.hour-day2.hour,day1.munite-day2.munite,day1.second-day2.second);
    return 0;
}
