#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        char ch='E';
        for(int k=1;k<i;k++){
            ch--;
        }
        for(int j=1;j<=i;j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}