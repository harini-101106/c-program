#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int prices[n];
    for(int i=0;i<n;i++){
        scanf("%d",&prices[i]);
    }
    int max=-1;
    for(int i=n-1;i>=0;i--){
        int temp=prices[i];
        prices[i]=max;
        if(temp>max){
            max=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",prices[i]);
    }
    return 0;
}