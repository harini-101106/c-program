#include<stdio.h>
int main(){
    int n,delays;
    int i=1;
    int total=0;
    int count=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&delays);
        total=total+delays;
        i++;
        if(delays>2){
            count=count+1;
        }
    }
    printf("Total Delays:%d\n",total);
    printf("Delayed Days:%d",count);
    return 0;
}