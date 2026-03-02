#include<stdio.h>
void power(int num,int power){
    int res=1;
    for(int i=1;i<=power;i++){
        res=res*num;
    }
    printf("%d",res);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    power(a,b);
    return 0;
}