#include<stdio.h>
int main(){
    int n,ticket;
    scanf("%d",&n);
    int total=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&ticket);
        total=total+ticket;
    }
    printf("Total collection: Rs %d",total);
    return 0;
}