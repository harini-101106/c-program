#include<stdio.h>
int main(){
    int n,i;
    int expectsum=0;
    int actualsum=0;
    scanf("%d",&n);
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        actualsum=actualsum+arr[i];
    }
    for(int j=1;j<=n;j++){
        expectsum=expectsum+j;
    }
    int total=expectsum-actualsum;
    printf("%d",total);
    return 0;
}