#include<stdio.h>
int main(){
    int n,status;
    int i=1;
    int success=0;
    int cancel=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&status);
        if(status==1){
            success++;
        }
        if(status==0){
            cancel++;
        }
        i++;
    }
    printf("Successful:%d\n",success);
    printf("Cancelled: %d\n",cancel);
    if(success>=cancel){
        printf("Status: safe");
    }
    else{
        printf("Status:Risk");
    }
    return 0;
}