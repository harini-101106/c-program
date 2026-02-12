#include<stdio.h>
int main(){
    int n,loss_units;
    int total=0;
    int loss_days=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&loss_units);
        total=total+loss_units;
        if(loss_units>100){
            loss_days=loss_days+1;
        }
    }
    printf("Total Loss: %d\n",total);
    printf("High Loss days: %d",loss_days);
    return 0;
}