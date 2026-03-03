#include<stdio.h>
int main(){
    char str[100];
    char *p;
    p=str;
    scanf("%[^\n]",str);
    int count=0;
    while(*p!='\0'){
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'){
            count++;
        }
        p++;
    }
    printf("%d",count);
    return 0;
}