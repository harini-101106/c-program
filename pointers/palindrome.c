#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    char*start;
    char *end;
    start=str;
    end=str;
    while(*end!='\0'){
        end++;
    }
    end--;
    int flag=1;
    while(start<end){
        if(*start==*end){
            start++;
            end--;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}