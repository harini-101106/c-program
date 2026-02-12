#include<stdio.h>
int main(){
    int n,rainfall;
    int total=0;
    int rain_days=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&rainfall);
        total=total+rainfall;
        if(rainfall>50){
            rain_days=rain_days+1;
        }
    }
    printf("Total Rainfall: %d\n",total);
    printf("Heavy Rain Days: %d",rain_days);
    return 0;
}