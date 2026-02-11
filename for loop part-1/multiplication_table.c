#include<stdio.h>
int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    for( int i=1;i<=10;i++){
        sum=sum+n;
        printf("%d ",sum);
    }
    return 0;
}