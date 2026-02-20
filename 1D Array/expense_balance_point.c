#include<stdio.h>
int main(){
    int n,expenses;
    scanf("%d",&n);
    int arr[n];
    for(int expenses=0;expenses<n;expenses++){
        scanf("%d",&arr[expenses]);
    }
    int leftsum=0;
    int rightsum=0;
    for(int j=0;j<n;j++){
        int leftsum=leftsum+arr[j];
    }
    for(int j=0;j<n;j++){
        int rightsum=rightsum+arr[j];
    }

    if(leftsum==rightsum){
        printf("%d",expenses);
    }
    return 0;
}