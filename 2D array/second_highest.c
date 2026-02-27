#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int salary[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&salary[i][j]);
        }
    }
    int highest=0;
    int secondhighest=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(salary[i][j]>highest){
                secondhighest=highest;
                highest=salary[i][j];
            }
            else if(salary[i][j]>secondhighest && salary[i][j]!=highest){
                secondhighest=salary[i][j];
            }
        }
    }
    printf("%d",secondhighest);
    return 0;
}