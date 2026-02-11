#include<stdio.h>
int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    for(;n!=0;n/=10){
        int rem=n%10;
        sum=sum+rem;
    }
    printf("%d",sum);
    return 0;
}