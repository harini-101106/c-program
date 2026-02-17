#include<stdio.h>
int main(){
    int totalData,n,daily_data;
    int i=1;
    int day=0;
    int count=0;
    scanf("%d",&totalData);
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&daily_data);
        if(totalData>=daily_data){
            totalData=totalData-daily_data;
            day++;
        }
        if(totalData<=0){
            totalData=0;
        }
        i++;
    }
    printf("Days used:%d\n",day);
    printf("Remaining Data:%dGB",totalData);
    return 0;
}