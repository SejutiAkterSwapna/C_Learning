#include <stdio.h>

int main (){
    int a, b,c;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);
    printf("Enter c = ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("%d is largest number\n",a);
    }
    else if(b>a && b>c){
        printf("%d is largest number\n",b);
    }
    else{
        printf("%d is largest number\n",c);
    }
    

    return 0;
}