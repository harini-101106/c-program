#include<stdio.h>

void simple_interest(int p,int r,int t){
    float interest=(p*r*t)/100;
    printf("%.2f",interest);
}
int main(){
    int p,r,t;
    scanf("%d %d %d",&p,&r,&t);
    simple_interest(p,r,t);
    return 0;
}