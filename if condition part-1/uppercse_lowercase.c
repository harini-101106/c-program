#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Uppercase letter");
    }
    else{
        printf("Lowercase letter");
    }
    return 0;
}