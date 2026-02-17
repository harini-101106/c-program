#include<stdio.h>
int main(){
    int n,power;
    int i=1;
    int high=0;;
    int count=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&power);
        if(power>high){
            high=power;
        }
        i++;
        if(power>5){
            count=count+1;
        }
    }
    printf("Max Usage:%d\n",high);
    printf("Surge Hours:%d",count);
    return 0;
}