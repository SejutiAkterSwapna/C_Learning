#include<stdio.h>
int main(){
    int num1,num2;
    //2 number input 
    printf("Enter a number = ");
    scanf("%d",&num1);

    printf("Enter another number = ");
    scanf("%d",&num2);

    int diff=num1-num2;
    int sum=num1+num2;
    int remin=num1%num2;
    int mul=num1*num2;
    int div=num1/num2;
    //print +,_,*,/
    printf("%d-%d=%d\n",num1,num2,diff); //Difference
    printf("%d+%d=%d\n",num1,num2,sum);//sum
    printf("%d  %d=%d\n",num1,num2,remin);
    printf("%d*%d=%d\n",num1,num2,mul);//
    printf("%d/%d=%d\n",num1,num2,div);

    return 0;
}