#include<stdio.h>
int main(){
    int fuelType,litres;
    scanf("%d %d",&fuelType,&litres);
    switch(fuelType){
        case 1:
        litres=105*litres;
        printf("Fuel cost Rs %d",litres);
        break;
        case 2:
        litres=92*litres;
        printf("Fuel cost Rs %d",litres);
        break;
        case 3:
        litres=85*litres;
        printf("Fuel cost Rs %d",litres);
        break;
        default:
        printf("invalid");
    }
    return 0;
}