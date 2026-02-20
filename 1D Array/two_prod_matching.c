#include<stdio.h>
int main(){
    int n,prices,target;
    scanf("%d",&n);
    int arr[n];
    for(int prices=0;prices<n;prices++){
        scanf("%d",&arr[prices]);
    }
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("%d %d",arr[i],arr[j]);
                return 0;
            }
        }
    }
    printf("no pair");
    return 0;
}