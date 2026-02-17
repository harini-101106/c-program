#include<stdio.h>
int main(){
    int n,noise;
    int i=1;
    int count=0;
    int currentstreak=0;
    int max=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&noise);
        if(noise>70){
            count++;
            currentstreak++;
        if(currentstreak>=max){
            max=currentstreak;
        }
    }
        else{
            currentstreak=0;
        }
        i++;
    }
    printf("Noise Violation:%d\n",count);
    printf("Longest Violation Streak:%d",max);
    return 0;
}