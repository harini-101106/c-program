#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[30];
    scanf("%[^\n]",str);
    int i=0;
    while(str[i]!='\0'){
        printf("%c",toupper(str[i]));
        i++;
    }
    return 0;
}