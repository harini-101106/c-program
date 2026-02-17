#include<stdio.h>
int main(){
    int maxWeight, n,weights;
    int i=1;
    int total=0;
    int count=0;
    scanf("%d",&maxWeight);   
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&weights);
        total=total+weights;
        if(total<maxWeight){
            count++;
        }
        i++;
    }
    printf("Passengers Allowed:%d\n",count);
    if(total>maxWeight){
        printf("Overload: yes");
    }
    else{
        printf("Overload: no");
    }
    return 0;
}