#include<stdio.h>
int main(){
    int speed;
    scanf("%d",&speed);
    if(speed>80){
        printf("speed limil exceeded");
    }
    else{
        printf("within speed limit");
    }
    return 0;
}