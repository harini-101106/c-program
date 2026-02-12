#include<stdio.h>
int main(){
    int n,patients;
    int total=0;
    int crowd_days=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&patients);
        total=total+patients;
        if(patients>100){
            crowd_days++;
        }
    }
    printf("Total Patients: %d\n",total);
    printf("Overcrowded Days:%d",crowd_days);
    return 0;
}