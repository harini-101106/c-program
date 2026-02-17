#include<stdio.h>
int main(){
    int n,initialBalance,transaction;
    int i=1;
    int count=0;
    scanf("%d",&n);
    scanf("%d",&initialBalance);
    while(i<=n){
        scanf("%d",&transaction);
        if(initialBalance>=transaction){
            initialBalance=initialBalance+transaction;
        }
        if(initialBalance<2000){
            count++;
        }
        i++;
    }
    printf("Final Balance:%d\n",initialBalance);
    printf("Low Balance Days:%d",count);
    return 0;
}