#include<stdio.h>
int main(){
    int code,experienceBonus;
    scanf("%d %d",&code,&experienceBonus);
    switch(code){
        case 1:
        experienceBonus=(5000*experienceBonus)+50000;
        printf("Salary Rs %d",experienceBonus);
        break;
        case 2:
        experienceBonus=(5000*experienceBonus)+35000;
        printf("Salary Rs %d",experienceBonus);
        break;
        case 3:
        experienceBonus=(5000*experienceBonus)+5000;
        printf("Salary Rs %d",experienceBonus);
        break;
        default:
        printf("invalid");
    }
    return 0;
}