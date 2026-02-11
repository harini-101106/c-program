#include<stdio.h>
int main(){
    int n;
    int first_num=0;
    int second_num=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",first_num);
        int temp=first_num+second_num;
        first_num=second_num;
        second_num=temp;
    }
    return 0;
}