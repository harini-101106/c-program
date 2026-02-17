#include<stdio.h>
int main(){
    int n,status;
    int i=1;
    int count=0;
    int current_no=0;
    int high=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&status);
        if(status==0){
            count++;
        }
        else{
            count=0;
        }
        if(count>=high){
            high=count;
        }
        i++;
    }
    printf("Longest failure streak:%d",high);
    return 0;
}