#include<stdio.h>

int digits(int num){
    int count=0;
    for(;num!=0;num/=10){
        count++;
    }
    printf("%d",count);
}
int main(){
    int n;
    scanf("%d",&n);
    digits(n);
    return 0;
}