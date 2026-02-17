#include<stdio.h>
int main(){
    int weeks,hours;
    int i=1;
    int count=0;
    scanf("%d",&weeks);
    while(i<=weeks){
        scanf("%d",&hours);
        if(hours==0){
            count++;
        }  
        i++;
    }
    printf("Inactive Weeks:%d\n",count);
    if(count>=3){
        printf("Risk status: high");
    }
    else{
        printf("Risk status: low");
    }
    return 0;
}