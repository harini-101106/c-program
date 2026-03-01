#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    scanf("%s",str);
    int i=0;
    if(str[i]>='A' && str[i]<='Z'){
        printf("valid");
    }
    else{
        printf("invalid");
    }
    return 0;
}