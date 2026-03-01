#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[20];
    scanf("%[^\n]",str);
    int i=0;
    while(str[i]!='\0'){
        printf("%c",tolower(str[i]));
        i++;
    }
    return 0;
}
