#include<stdio.h>
struct date{
      int hour;
      int munite;
      int second;
};
int main(){
    struct date day1,day2;
    int i;
          for(i=0;i<1;i++){
             printf("Enter hours\n");
             scanf("%d",&day1.hour);
             printf("Enter munite\n");
             scanf("%d",&day1.munite);
             printf("Enter second\n");
             scanf("%d",&day1.second);
          }
          printf("%d:%d:%d\n",day1.hour,day1.munite,day1.second);
          for(i=0;i<1;i++){
             printf("Enter hours\n");
             scanf("%d",&day2.hour);
             printf("Enter munite\n");
             scanf("%d",&day2.munite);
             printf("Enter second\n");
             scanf("%d",&day2.second);
          }

          printf("%d:%d:%d\n",day2.hour,day2.munite,day2.second);

          printf("%d %d %d",day1.hour- day2.hour,day1.munite- day2.munite,day1.second-day2.second);
    return 0;
}
