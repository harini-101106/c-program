#include<stdio.h>

void reverse(int num){
    int rev=0;
    for(;num!=0;num/=10){
        int rem=num%10;
        rev=rev*10+rem;
    }
    printf("%d",rev);
}
int main(){
    int n;
    scanf("%d",&n);
    reverse(n);
    return 0;
}