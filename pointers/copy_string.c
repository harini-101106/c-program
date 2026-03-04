#include<stdio.h>

void copy_string(char*source,char *destination){
    while(*source!='\0'){
        *destination=*source;
        source++;
        destination++;
    }
    *destination='\0';
}
int main(){
    char str1[100],str2[100];
    char *p1,*p2;
    p1=str1;
    p2=str2;
    scanf("%[^\n]",str1);
    copy_string(str1,str2);
    printf("%s",str2);
    return 0;
}