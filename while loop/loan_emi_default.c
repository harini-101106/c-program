#include<stdio.h>
int main(){
    int n,pattern;
    int i=1;
    int high=0;
    int count=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&pattern);
        if(pattern==0){
            count++;
            if(count>high){
                high=count;
            }
        }
        else{
            count=0;
        }
        i++;
    }
    printf("Longest default streak:%d",high);
    return 0;
}