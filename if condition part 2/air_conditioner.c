#include<stdio.h>
int main(){
    int temperature;
    scanf("%d",&temperature);
    if(temperature<=18){
        printf("Heating mode");
    }
    else if(temperature>18 && temperature<=25){
        printf("Normal mode");
    }
    else{
        printf("Cooling mode");
    }
    return 0;
}