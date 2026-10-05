#include <stdio.h>
int main (){
    int s1, s2, s3;

    printf("Enter 1st side = ");
    scanf("%d",&s1);
    printf("Enter 2nd side = ");
    scanf("%d",&s2);
    printf("Enter 3rd side = ");
    scanf("%d",&s3);

    if((s1*s1 + s2*s2 == s3*s3)||(s1*s1 + s3*s3 == s2*s2)||(s2*s2 + s3*s3 == s1*s1)){
        printf("Right-angled Triangle.\n");
    }
    else{
        printf("Not a Right-angled Triangle.\n");
    }
    return 0;
}