#include<stdio.h>
int main(){
    int roomType;
    char season;
    scanf("%d %c",&roomType,&season);
    switch(roomType){
        case 1:
        switch(season){
            case 'A':
            printf("Rs 2500");
            break;
            case 'B':
            printf("Rs 2000");
            break;
        }
        break;
        case 2:
        switch(season){
            case 'C':
            printf("Rs 4000");
            break;
            case 'D':
            printf("Rs 3000");
            break;
        }
        break;
        default:
        printf("invalid");
    }
    return 0;
    
}