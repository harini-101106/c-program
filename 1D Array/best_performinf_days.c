#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[n-1];
    for(int i=0;i<n;i++){
        int leader=1;
    for(int j=i+1;j<n;j++){
        if(arr[j]>arr[i]){
            leader=0;
            break;
        }
    }
        if(leader ==1){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}