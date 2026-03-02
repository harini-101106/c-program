#include<stdio.h>

void largest(int n1,int n2){
    if(n1>n2){
        printf("%d",n1);
    }
    else{
        printf("%d",n2);
    }
}
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    largest(n1,n2);
    return 0;
}