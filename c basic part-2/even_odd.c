#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    n=(n%2==0 ?printf("Even"):printf("Odd"));
    printf("%s",n);
    return 0;
}