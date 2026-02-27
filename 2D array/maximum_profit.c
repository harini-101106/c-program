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
    int maxrow[r];
    int minrow[r];
    for(int i=0;i<r;i++){
        maxrow[i]=arr[i][0];
        minrow[i]=arr[i][0];
        for(int j=0;j<c;j++){
            if(arr[i][j]>maxrow[i]){
                maxrow[i]=arr[i][j];
            }
            if(arr[i][j]<minrow[i]){
                minrow[i]=arr[i][j];
            }
        }
    }
    int maxprod=maxrow[0]*maxrow[1];
    for(int i=0;i<r;i++){
        for(int j=i+1;j<r;j++){
            int prod1=maxrow[i]*maxrow[j];
            int prod2=minrow[i]*minrow[j];
            if(prod1>maxprod){
                maxprod=prod1;
            }
            if(prod2>maxprod){   
                maxprod=prod2;
            }
        }
    }
    printf("%d",maxprod);
    return 0;
}