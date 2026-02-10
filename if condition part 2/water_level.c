#include<stdio.h>
int main(){
    int level;
    scanf("%d",&level);
    if(level>90){
        printf("Overflow warning");
    }
    else{
        printf("Safe level");
    }
    return 0;
}