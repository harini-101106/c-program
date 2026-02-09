#include<stdio.h>
int main(){
    int option;
    int a,b;
    scanf("%d %d %d",&option,&a,&b);
    switch(option){
        case 1:
        printf("Sum=%d",a+b);
        break;
        case 2:
        printf("diff=%d",a-b);
        break;
        case 3:
        printf("mul=%d",a*b);
        break;
        case 4:
        printf("div=%d",a/b);
        break;
        default:
        printf("invalid");
    }
    return 0;
}