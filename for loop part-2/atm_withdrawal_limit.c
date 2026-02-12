#include<stdio.h>
int main(){
    int number_of_withdrawals;
    int withdrawal_amounts;
    int total=0;
    scanf("%d",&number_of_withdrawals);
    for(int i=1;i<=number_of_withdrawals;i++){
        scanf("%d",&withdrawal_amounts);
        total=total+withdrawal_amounts;
    }
        if(total>10000){
            printf("Limit exceeded");
        }
        else{
            printf("Approved\n");
        }
    
    return 0;
}