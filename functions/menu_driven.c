#include<stdio.h>

int calculator(int num1,int num2,char choice){
    switch(choice){
        case '+':
        return num1+num2;
        case '-':
        return num1-num2;
        case '*':
        return num1*num2;
        case '/':
        return num1/num2;
        default:
        return 0;
    }
}
int main(){
    int a,b;
    char choice;
    scanf("%d %d",&a,&b);
    scanf(" %c",&choice);
    printf("%d",calculator(a,b,choice));
    return 0;
}