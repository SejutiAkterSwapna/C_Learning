#include<stdio.h>
int main(){
    int day;
    for(int i=1; i<=3; i++){
        int present = 0;
        printf("Enter attendance for Student %d:\n",i);
        for(int j=1; j<=3; j++){
            printf("Day %d: ",j);
            scanf("%d",&day);
            if(day == 1){
                present++;
            }
        }
        printf("Student %d present: %d days\n",i, present);
    }
    return 0;
}