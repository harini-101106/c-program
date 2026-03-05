#include<stdio.h>
#include<math.h>

void armstrong(int num){
    int count=0;
    int original=num;

    for(;num!=0;num/=10){
        count++;
    }

    num = original;  

    int sum=0;
    while(num!=0){
        int rem=num%10;
        int res=1;
        for(int i=0;i<count;i++){
            res=res*rem;
        }
        sum=sum+res;
        num/=10;
    }

    if(sum==original){
        printf("Armstrong");
    }
    else{
        printf("not Armstrong");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    armstrong(n);
    return 0;
}