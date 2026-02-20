#include<stdio.h>
int main(){
    int n,prices;
    int min=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0 && (arr[i]<min ||min==0)){
            min=arr[i];
        }
    }
    if(min==0){
        printf("no psitive");
    }
    else{
        printf("%d",min);
    }
    return 0;
}