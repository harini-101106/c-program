#include<stdio.h>
int main(){
    int n,usage_gb;
    int total=0;
    int usage_days=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&usage_gb);
        total=total+usage_gb;
        if(usage_gb>2){
            usage_days++;
        }
    }
    printf("Total Data: %d\n",total);
    printf("High Usage Days: %d",usage_days);
    return 0;
}