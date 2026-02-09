#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    n=(n>10 || n<100)?printf("YES"):printf("NO");
    return 0;
}