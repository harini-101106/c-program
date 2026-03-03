#include<stdio.h>

void swap(int *num1,int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swap:%d %d\n",a,b);
    swap(&a,&b);
    printf("After swap:%d %d",a,b);
    return 0;
}