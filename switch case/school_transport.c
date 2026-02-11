#include<stdio.h>
int main(){
    int distanceCategory;
    scanf("%d",&distanceCategory);
    switch(distanceCategory){
        case 1:
        printf("Transport Fee Rs 800");
        break;
        case 2:
        printf("Transport Fee Rs 1200");
        break;
        case 3:
        printf("Transport Fee Rs 1800");
        break;
        default:
        printf("Invalid");
    }
    return 0;
}