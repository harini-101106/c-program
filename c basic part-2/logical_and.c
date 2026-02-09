#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    n=(n>=10 && n<=50)?printf("YES"):printf("NO");
    printf("%s",n);
    return 0;
}