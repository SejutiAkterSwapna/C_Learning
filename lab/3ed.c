#include<stdio.h>
int main(){
    int day;
    int present1 = 0,present2 = 0,present3 = 0;
        printf("Enter attendance for Student 1:\n");
        for(int i=1; i<=3; i++){
            printf("Day %d: ",i);
            scanf("%d",&day);
            if(day == 1){
                present1++;
            }
        }
        printf("Enter attendance for Student 2:\n");
        for(int i=1; i<=3; i++){
            printf("Day %d: ",i);
            scanf("%d",&day);
            if(day == 1){
                present2++;
            }
        }
        printf("Enter attendance for Student 3:\n");
        for(int i=1; i<=3; i++){
            printf("Day %d: ",i);
            scanf("%d",&day);
            if(day == 1){
                present3++;
            }
        }
        printf("Student 1 present: %d days\n", present1);
        printf("Student 1 present: %d days\n", present2);
        printf("Student 1 present: %d days\n", present3);
    return 0;
}