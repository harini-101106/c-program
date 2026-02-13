#include<stdio.h>
int main(){
    for(char i='A';i<='E';i++){
        for(char j='A';j<i+1;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}