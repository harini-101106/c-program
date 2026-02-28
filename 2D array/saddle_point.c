#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int minrow=1;
            int maxrow=1;
            for(int k=0;k<c;k++){
                if(arr[i][j]>arr[i][k]){
                    minrow=0;
                }
            }
            for(int l=0;l<r;l++){
                if(arr[i][j]<arr[l][j]){
                    maxrow=0;
                }
            }
            if(minrow==1 && maxrow==1){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}