#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    char ch;
    scanf("%s",str);
    scanf(" %c",&ch);
    int i=0;
    int index=-1;
    while(str[i]!='\0'){
        if(str[i]==ch){
            index=i;
            break;
        }
        i++;
    }
    printf("%d",index);
    return 0;
}