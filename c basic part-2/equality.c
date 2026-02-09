#include<stdio.h>
int main(){
    int a,b,r;
    scanf("%d %d",&a,&b);
    r=(a==b)?printf("Equal"):printf("Not equal");
    printf("%s",r);
    return 0;

}