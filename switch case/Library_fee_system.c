#include<stdio.h>
int main(){
    int bookType,daysLate;
    scanf("%d %d",&bookType,&daysLate);
    switch(bookType){
        case 1:
        daysLate=2*daysLate;
        printf("Late Fee Rs %d",daysLate);
        break;
        case 2:
        daysLate=5*daysLate;
        printf("Late Fee Rs %d",daysLate);
        break;
        default:
        printf("invalid");
    }
    return 0;
}