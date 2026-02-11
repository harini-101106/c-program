#include<stdio.h>
int main(){
    int courseType;
    scanf("%d",&courseType);
    switch(courseType){
        case 1:
        printf("Certificate Fee Rs 0");
        break;
        case 2:
        printf("Certificate Fee Rs 500");
        break;
        default:
        printf("invalid");
    }
    return 0;
}