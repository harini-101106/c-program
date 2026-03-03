#include<stdio.h>

int findmax(int n,int *arr){
    int max=*arr;
    for(int i=1;i<n;i++){
        if(*(arr+i)>max){
            max=*(arr+i);
        }
    }
    return max;

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",findmax(n,arr));
    return 0;
}