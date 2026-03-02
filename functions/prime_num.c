#include<stdio.h>

void prime(int num){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
        if(count==2){
            printf("prime");
        }
        else{
            printf("not prime");
        }
    }
int main(){
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}