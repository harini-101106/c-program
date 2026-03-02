#include<stdio.h>

int sum_digits(int num){
    int sum=0;
    for(;num!=0;num/=10){
        int digit=num%10;
        sum=sum+digit;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sum_digits(n));
    return 0;
}