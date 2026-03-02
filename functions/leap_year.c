#include<stdio.h>

void leap_year(int year){
    if((year%4==0&&year%100!=0)||year%400==0){
        printf("Leap year");
    }
    else{
        printf("not Leap year");
    }
}
int main(){
    int year;
    scanf("%d",&year);
    leap_year(year);
    return 0;
}