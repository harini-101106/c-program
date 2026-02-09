#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    n=(n& n-1==0)?printf("YES"):printf("NO");
    return 0;
}