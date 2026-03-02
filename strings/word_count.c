#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    scanf("%[^\n]",str);
    int i=0;
    int space=0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            space++;
        }
        i++;
    }
    int words;
    if(i>0){
        words=space+1;
    }
    printf("%d",words);
    return 0;
}