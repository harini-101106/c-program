#include<stdio.h>
int main(){
    int vehicleCategory,vehicleAge;
    scanf("%d %d",&vehicleCategory,&vehicleAge);
    switch(vehicleCategory){
        case 1:
        if(vehicleAge<=5){
            printf("Rs 1500");
        }
        else{
            printf("Rs 2500");
        }
        break;
        case 2:
        if(vehicleAge<=5){
            printf("Rs 4000");
        }
        else{
            printf("Rs 6000");
        }
        break;
    }
    return 0;
}