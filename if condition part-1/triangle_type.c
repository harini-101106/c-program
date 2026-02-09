#include<stdio.h>
int main(){
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2 && s2==s3 && s3==s1){
        printf("Equilateral triangle");
    }
    return 0;
}