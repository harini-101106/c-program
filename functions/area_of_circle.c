#include<stdio.h>

int circle_area(int radius){
    float pi=3.14;
    float area=pi*radius*radius;
    printf("%.2f",area);
}
int main(){
    int r;
    scanf("%d",&r);
    circle_area(r);
    return 0;
}