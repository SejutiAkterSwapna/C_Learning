//Array.
#include <stdio.h>
#include <math.h>
int main (){
    int n1,n2;
    printf("Enter in-dx 1: ");
    scanf("%d",&n1);
    printf("Enter in-dx 2: ");
    scanf("%d",&n2);
    int num1[n1];
    int num2[n2];
    int sum = 0;

    printf("Enter number: ");
    for(int i=0; i<n1;i++){
        scanf("%d",&num1[i]);
    }
    for(int i=0; i<n1; i++){
        printf("%d ",num1[i]);
        sum = sum + num1[i];   
    }
    printf("Sum = %d\n",sum);

    printf("\n");
    //------------------------
    printf("Enter number: ");
    for(int i=0; i<n2;i++){
        scanf("%d",&num2[i]);
    }
    sum=0;
    for(int i=0; i<n2; i++){
        printf("%d ",num2[i]);
        sum = sum + num2[i];
        
    }
    printf("Sum = %d\n",sum);
    printf("\n");
    return 0;
}