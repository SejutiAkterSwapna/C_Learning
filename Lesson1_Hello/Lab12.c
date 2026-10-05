#include <stdio.h>
int main (){
    int s1, s2, s3;

    printf("Enter 1st side = ");
    scanf("%d",&s1);
    printf("Enter 2nd side = ");
    scanf("%d",&s2);
    printf("Enter 3rd side = ");
    scanf("%d",&s3);

    if(s1==s2 && s1==s3 && s2==s3){
        printf("Equilateral Triangle.\n");
    }
    else if(s1==s2 || s1==s3 || s2==s3){
        printf("Isosceles Triangle.\n");
    }
    else{  //condition(s1!=s2 && s1!=s3 && s2!=s3)
        printf("Scalene Triangle\n");
    }
    return 0;
}