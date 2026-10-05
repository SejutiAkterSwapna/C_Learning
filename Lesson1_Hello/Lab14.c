#include <stdio.h>
int main (){//Using third variable
    int num1, num2, swap;
    printf("Enter num1 =");
    scanf("%d",&num1);
    printf("Enter num1 =");
    scanf("%d",&num2);
    swap=num1;
    num1=num2;
    num2=swap;

    printf("num1 = %d\n",num1);
    printf("num2 = %d\n",num2);

    return 0;
}