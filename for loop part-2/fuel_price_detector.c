#include<stdio.h>
int main(){
    int n;
    int fuel;
    int high=0;
    int days=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&fuel);
        if(fuel>high){
            high=fuel;
        }
        if(fuel>100){
            days++;
        }
    }
    printf("Highest Price: %d\n",high);
    printf("High Price Days: %d",days);
    return 0;
}