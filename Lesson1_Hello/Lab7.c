#include<stdio.h>
int main(){
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);
    if(0<num){
       printf("%d positive number\n",num);
    }
    else if (0>num){
       printf("%d negative number\n",num);
    }
    else{
      printf("Number is ZERO\n");
    }
     
    return 0;
}