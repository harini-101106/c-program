#include<stdio.h>
int main(){
    int n,marks,x;
    int count=0;
    scanf("%d",&n);
    int arr[n];
    for(int marks=0;marks<n;marks++){
        scanf("%d",&arr[marks]);
    }
    scanf("%d",&x);
    for(int marks=0;marks<n;marks++){
        if(arr[marks]==x){
        count++;
    }
    }
    printf("%d",count);
    return 0;
}