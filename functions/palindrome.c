#include<stdio.h>

void palindrome(int num){
    int rev=0;
    int original=num;
    for(;num!=0;num/=10){
        int rem=num%10;
        rev=rev*10+rem;
    }
        if(original==rev){
            printf("palindrome");
        }
        else{
            printf("not palindrome");
        }
    }
int main(){
    int n;
    scanf("%d",&n);
    palindrome(n);
    return 0;
}