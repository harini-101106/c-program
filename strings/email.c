#include<stdio.h>
#include<string.h>
int main(){
    char email[20];
    int i=0;
    scanf("%s",email);
    while(email[i]!='\0'){
        if(email[i]=='@'){
            break;
        }
    printf("%c",email[i]);
    i++;
    }
    return 0;
}