#include<stdio.h>
int main(){
    int r,c;
    int i;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int index=0;
    int lowest=0;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
        int average=sum/c;
        if(i==0){
            lowest=average;
        }
        else if(average<lowest){
            lowest=average;
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}