#include<stdio.h>
int main(){
    int durationType;
    scanf("%d",&durationType);
    switch(durationType){
        case 1:
        printf("Membership Fee Rs 1500");
        break;
        case 2:
        printf("Membership Fee Rs 4000");
        break;
        case 3:
        printf("Membership Fee Rs 7000");
        break;
    }
    return 0;
}