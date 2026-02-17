#include<stdio.h>
int main(){
    int n,overtime;
    int i=1;
    int count=0;
    int total=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&overtime);
        total=total+overtime;
        i++;
        if(overtime>4){
            count=count+1;
        }
    }
    printf("Total Overtime: %d\n",total);
    printf("Burnout Days: %d",count);
    return 0;
}