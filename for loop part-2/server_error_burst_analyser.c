#include<stdio.h>
int main(){
    int n,errors;
    int total=0;
    int critical_hours=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&errors);
        total=total+errors;
        if(errors>50){
            critical_hours++;
        }
    }
    printf("Total Errors: %d\n",total);
    printf("Critical Hours: %d",critical_hours);
    return 0;
}