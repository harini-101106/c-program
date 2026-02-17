#include<stdio.h>
int main(){
    int capacity,hours,n;
    int i=1;
    int total=0;
    int count=0;
    scanf("%d",&capacity);
    scanf("%d",&hours);
    while(i<=hours){
        scanf("%d",&n);
        total=total+n;
        i++;
        if(total>(90*capacity)/100){
            count++;
        }
    }
    printf("Final Occupied Beds:%d\n",total);
    printf("Critical Hours:%d",count);
    return 0;
}