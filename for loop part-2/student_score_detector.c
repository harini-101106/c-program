#include<stdio.h>
int main(){
    int n,marks;
    int total=0;
    int failed=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&marks);
        total=total+marks;
        if(marks<40){
            failed++;
        }
    }
    int average=total/n;
    printf("Average Score: %d\n",average);
    printf("Failed Subjects: %d",failed);
    return 0;
}