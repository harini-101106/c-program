#include<stdio.h>

void fibonacci_series(int num){
     int first=0;
     int second=1;
    for(int i=0;i<num;i++){
        printf("%d",first);
        int temp=first+second;
        first=second;
        second=temp;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    fibonacci_series(n);
    return 0;
}