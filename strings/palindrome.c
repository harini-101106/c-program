#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    scanf("%s",str);
    int i=0;
    int len=strlen(str);
    while(i<len/2){
        if(str[i]==str[len-i-1]){
            if(str[i+1]==str[len-i-2]){
                printf("palindrome");
                return 0;
            }
        }
        i++;
    }
    printf(" not a palindrome");
    return 0;
}