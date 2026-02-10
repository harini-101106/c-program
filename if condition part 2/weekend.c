#include<stdio.h>
int main(){
    int days;
    scanf("%d",&days);
    if(days==6 || days==7){
        printf("Weekend");
    }
    else{
        printf("Weekday");
    }
    return 0;
}