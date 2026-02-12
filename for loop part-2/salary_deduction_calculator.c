#include<stdio.h>
int main(){
    int salary,absentDays;
    scanf("%d",&salary);
    for(int i=salary;i<=salary;i++){
        scanf("%d",&absentDays);
        absentDays=absentDays*100;
        salary=salary-absentDays;
        printf("Final salary: %d",salary);
    }
    return 0;
}