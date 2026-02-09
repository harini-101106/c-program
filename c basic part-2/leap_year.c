#include<stdio.h>
int main(){
    int y;
    scanf("%d",&y);
    y=((y%4==0 && y%100!=0)||(y%400==0))?printf("leap"):printf("not leap");
    return 0;
}