#include<stdio.h>
int main(){
    int n,salaries;
    scanf("%d",&n);
    int arr[n];
    for(int salaries=0;salaries<n;salaries++){
        scanf("%d",&arr[salaries]);
    }
    int largest=0;
    int secondlargest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest &&arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    printf("%d",secondlargest);
    return 0;
}