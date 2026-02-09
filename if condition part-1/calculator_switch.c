#include<stdio.h>
int main(){
    int a,b;
    char oper;
    scanf("%d %c %d",&a,&oper,&b);
    switch(oper){
        case '+':
        printf("Result=%d",a+b);
        break;
        case '-':
        printf("Result=%d",a-b);
        break;
        case '*':
        printf("Result=%d",a*b);
        break;
        case '/':
        printf("Result=%d",a/b);
        break;
        default:
        printf("invalid");
    }
    return 0;
}