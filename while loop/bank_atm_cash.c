#include<stdio.h>
int main(){
    int ATMcash,n,withdrawal_amounts;
    int i=1;
    int count=0;
    scanf("%d",&ATMcash);
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&withdrawal_amounts);
        if(ATMcash>=withdrawal_amounts){
            ATMcash=ATMcash-withdrawal_amounts;
            count++;
        }
        else{
            break;
        }
        i++;
    }
    printf("Successful withdrawal:%d\n",count);
    printf("Remaining cash:%d",ATMcash);
    return 0;
}