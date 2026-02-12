#include<stdio.h>
int main(){
    int n,voltage;
    int count=0;
    scanf("%d",&n);
    int min=voltage;
    for(int i=1;i<=n;i++){
        scanf("%d",&voltage);
        if(voltage<min){
           min=voltage;
        }
        if(voltage<210){
            count++;
        }
    }
    printf("Minimum Voltage: %d\n",min);
    printf("Low Voltage Events: %d",count);
    return 0;
}