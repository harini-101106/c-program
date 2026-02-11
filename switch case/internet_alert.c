#include<stdio.h>
int main(){
    int planType;
    float dataUsed;
    scanf("%d %f",&planType,&dataUsed);
    switch(planType){
        case 1:
        if(dataUsed<=1){
            printf("Normal spped");
        }
        else{
            printf("Speed Reduced");
        }
        break;
        case 2:
        if(dataUsed<=2){
            printf("Normal speed");
        }
        else{
            printf("Extra charges applied");
        }
        break;
        default:
        printf("invalid");
    }
    return 0;
}