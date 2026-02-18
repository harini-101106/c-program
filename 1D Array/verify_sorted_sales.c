#include<stdio.h>
int main(){
    int n,sales;
    scanf("%d",&n);
    int arr[n];
    for(int sales=0;sales<n;sales++){
        scanf("%d",&arr[sales]);
    }
    int sorted=1;
    for(int sales=0;sales<n-1;sales++){
        if(arr[sales]>=arr[sales+1]){
            sorted=0;
            break;
        }
    }
    if(sorted==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}