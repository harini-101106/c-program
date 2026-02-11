#include<stdio.h>
int main(){
    int accountType,balance,withdrawalAmmount;
    scanf("%d %d %d",&accountType,&balance,&withdrawalAmmount);
    switch(accountType){
        case 1:
        if(balance>=withdrawalAmmount){
            printf("Transaction successful");;
            break;
        }
        else{
            printf("Limit exceeded");
            break;
        }
        break;
        case 2:
        if(withdrawalAmmount<=5000){
            printf("Transaction successful");
            break;
        }
        else{
            printf("limit exceeded");
            break;
        }
        break;
        default:
        printf("invalid");
    }
    return 0;
}