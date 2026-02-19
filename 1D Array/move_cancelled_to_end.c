#include<stdio.h>
int main(){
    int n,orders;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int forward=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
           arr[forward]=arr[j];
           forward++;
        }
    }
    for(int k=forward;k<n;k++){
        arr[k]=0;
    }
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}