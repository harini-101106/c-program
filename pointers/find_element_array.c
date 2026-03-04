#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int target;
    int *ptr;
    ptr=arr;
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    scanf("%d",&target);
    int index=-1;
    for(int i=0;i<n;i++){
        if(*(ptr+i)==target){
            index=i+1;
            break;
        }
    }
    printf("%d",index);
    return 0;
}