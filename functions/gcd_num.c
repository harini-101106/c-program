#include<stdio.h>

void greatest_common_divisors(int a,int b){
    int res=1;
    for(int i=1;i!=b;i++){
        if(a%i==0 && b%i==0){
            res=i;
        }
    }
    printf("%d",res);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    greatest_common_divisors(a,b);
    return 0;
}