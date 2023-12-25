#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char outcome[n+1];
    scanf("%s",outcome);
    int anton_wins=0,danis_wins=0;
    for(int i=0;i<n;i++){
        if(outcome[i]=='A'){
            anton_wins++;
        }else{
            danis_wins++;
        }
    }
    if(anton_wins>danis_wins){
        printf("Anton\n");
    }else if(danis_wins>anton_wins){
       printf("Danik\n");
    }else{
         printf("Friendship\n");
    }

    return 0;
}
