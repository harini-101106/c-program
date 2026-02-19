#include<stdio.h>
int main(){
    int n,stops;
    scanf("%d",&n);
    int arr[n];
    for(int stops=0;stops<n;stops++){
        scanf("%d",&arr[stops]);
    }
    for(int j=n-1;j>=0;j--){
        printf("%d ",arr[j]);
    }
    return 0;
}