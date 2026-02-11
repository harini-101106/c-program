#include<stdio.h>
int main(){
    int classType;
    scanf("%d",&classType);
    switch(classType){
        case 1:
        printf("Update Fee Rs 300");
        break;
        case 2:
        printf("Update Fee Rs 800");
        break;
        case 3:
        printf("Update Fee Rs 1500");
        break;
        default:
        printf("invalid");
    }
    return 0;
}