#include<stdio.h>
int main(){
    int fuel,n,consumed;
    int i=1;
    int count=0;
    scanf("%d",&fuel);
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&consumed);
        if(fuel>=consumed){
            fuel=fuel-consumed;
            count++;
            i++;
        }
        else{
            break;
        }
    }
    printf("Completed Trips: %d\n",count);
    printf("Remaining Fuel: %d",fuel);
    return 0;
}