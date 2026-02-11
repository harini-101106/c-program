#include<stdio.h>
int main(){
    int violationType;
    scanf("%d",&violationType);
    switch(violationType){
        case 1:
        printf("Fine Rs 1000");
        break;
        case 2:
        printf("Fine Rs 1500");
        break;
        case 3:
        printf("Fine Rs 2000");
        break;
        default:
        printf("invalid");
    }
    return 0;
}