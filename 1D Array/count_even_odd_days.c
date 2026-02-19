#include<stdio.h>
int main(){
    int n,day;
    int evencount=0;
    int oddcount=0;
    scanf("%d",&n);
    int arr[n];
    for(int day=0;day<n;day++){
        scanf("%d",&arr[day]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("Even: %d ",evencount);
    printf("Odd: %d",oddcount);
    return 0;
}