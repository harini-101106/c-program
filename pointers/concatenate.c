#include<stdio.h>
int main(){
    char str1[50];
    char str2[50];
    char *ptr1;
    char *ptr2;
    ptr1=str1;
    ptr2=str2;
    scanf("%s",str1);
    scanf("%s",str2);
    while(*ptr1!='\0'){
        ptr1++;
    }
    while(*ptr2!='\0'){
        *ptr1=*ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1='\0';
    printf("%s",str1);
    return 0;
}