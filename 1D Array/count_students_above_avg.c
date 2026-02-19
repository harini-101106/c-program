#include<stdio.h>
int main(){
    int n,marks;
    scanf("%d",&n);
    int arr[n];
    for(int marks=0;marks<n;marks++){
        scanf("%d",&arr[marks]);
    }
    int sum=0;
    for(int j=0;j<n;j++){
        sum=sum+arr[j];
    }
    int avg=sum/n;
    int count=0;
    for(int k=0;k<n;k++){
        if(arr[k]>avg){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}