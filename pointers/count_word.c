#include<stdio.h>
int main(){
    char str[50];
    char *ptr=str;
    scanf("%[^\n]",str);
    int count=0;
    while(*ptr!='\0'){
        if(*ptr==' '){
            count++;
        }
        ptr++;
    }
    printf("%d",count+1);
    return 0;
}