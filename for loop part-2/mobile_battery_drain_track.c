#include<stdio.h>
int main(){
    int batteryPercent,n,battery_drain;
    int total=0;
    scanf("%d",&batteryPercent);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&battery_drain);
        total=total+battery_drain;
    }
    batteryPercent=batteryPercent-total;
    printf("Remaining Battery: %d%%",batteryPercent);
    return 0;
}