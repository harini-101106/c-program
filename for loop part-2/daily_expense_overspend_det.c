#include<stdio.h>
int main(){
    int days;
    int total=0;
    int overspend_days=0;
    int daily_expenses;
    scanf("%d",&days);
    for(int i=1;i<=days;i++){
        scanf("%d",&daily_expenses);
        total=total+daily_expenses;
        if(daily_expenses>1000){
            overspend_days+=1;
        }
    }
        printf("Total Expenses: %d \n",total);
        printf("Overspend days: %d",overspend_days);
        return 0;
}