#include<stdio.h>
int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i+=2){
        if(i%2==0){
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}