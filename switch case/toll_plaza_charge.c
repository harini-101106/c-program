#include<stdio.h>
int main(){
    int vehicleType,trips;
    scanf("%d %d",&vehicleType,&trips);
    switch(vehicleType){
        case 1:
        if(trips==1){
            printf("Rs 100");
        }
        else if(trips>=2 && trips<=10){
            printf("Rs 800");
        }
        else{
            printf("Rs 800");
        }
        break;
        case 2:
        trips=240*trips;
        printf("Rs %d",trips);
        break;
    }
    return 0;
}