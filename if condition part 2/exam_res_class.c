#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    if(mark<=35){
        printf("Fail");
    }
    else if(mark>35 && mark<=55){
        printf("Pass");
    }
    else{
        printf("Distinction");
        return 0;
    }
}