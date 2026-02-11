#include<stdio.h>
int main(){
    int doctorType;
    scanf("%d",&doctorType);
    switch(doctorType){
        case 1:
        printf("Consultation Fee Rs 500");
        break;
        case 2:
        printf("Consultation Fee Rs 1200");
        break;
        default:
        printf("Invalid");
    }
    return 0;
}