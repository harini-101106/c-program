#include<stdio.h>

int perfect_num(int num){
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
        if(sum==num){
            printf("Perfect number");
        }
        else{
            printf("not perfect number");
        }
    }
int main(){
    int n;
    scanf("%d",&n);
    perfect_num(n);
    return 0;
}