#include<stdio.h>
int main(){
    int cart_value;
    scanf("%d",&cart_value);
    if(cart_value>=499){
        printf("Free delivery");
    }
    else{
        printf("Delivery charges apply");
    }
    return 0;
}