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
    //print +,_,*,/,% & last 1 digit.
    printf("%d - %d = %d\n",num1,num2,diff); 
    printf("Last 1 digit is =%d\n",diff%10);

    printf("%d + %d = %d\n",num1,num2,sum);
    printf("Last 1 digit is =%d\n",sum%10);
    
    printf("%d re %d= %d\n",num1,num2,remin);
    printf("Last 1 digit is =%d\n",remin%10);

    printf("%d * %d =  %d\n",num1,num2,mul);
    printf("Last 1 digit is =%d\n",mul%10);

    printf("%d / %d = %d\n",num1,num2,div);
    printf("Last 1 digit is =%d\n",div%10);

    return 0;
}