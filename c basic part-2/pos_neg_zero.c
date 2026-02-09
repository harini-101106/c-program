#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    n=(n>0)?printf("POSITIVE"):(n<0)?printf("NEGATIVE"):printf("ZERO");
    return 0;
}