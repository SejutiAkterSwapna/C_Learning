#include <stdio.h>

int main (){
    int mark ;
    printf("Enter your mark :");
    scanf("%d",&mark);
    if(mark>=80 && mark<=100){
        printf("Your Grade is A+\n");
    }
    else if(mark>=70 && mark<=79){
        printf("Your Grade is A\n");
    }
    else if(mark>=60 && mark<=69){
        printf("Your Grade is A-\n");
    }    
    else if(mark>=50 && mark<=59){
        printf("Your Grade is B\n");
    }else if(mark>=40 && mark<=49){
        printf("Your Grade is C\n");
    } 
    else if(mark>=0 && mark<=39){
        printf("Your Grade is F\n");
    }
    else
    {
        printf("Invalid Grade\n");
    }
           
    return 0;
}