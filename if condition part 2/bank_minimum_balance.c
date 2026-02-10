#include<stdio.h>
int main(){
    int balance;
    scanf("%d",&balance);
    if(balance<1000){
        printf("Low balance");
    }
    else{
        printf("Sufficient balance");
    }
    return 0;
}