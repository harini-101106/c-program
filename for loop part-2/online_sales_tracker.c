#include<stdio.h>
int main(){
    int n,revenue;
    int total=0;
    int days=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&revenue);
        total=total+revenue;
        if(revenue>50000){
            days++;
        }
    }
    printf("Total Revenue: %d\n",total);
    printf("Target Days:%d",days);
    return 0;
}