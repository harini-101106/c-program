#include<stdio.h>
int main(){
    int battery;
    scanf("%d",&battery);
    if(battery<20){
        printf("Low battery");
    }
    else{
        printf("Battery ok");
    }
    return 0;
}