#include<stdio.h>
//n Tempereture Conversion
int main(){
    double C;
    printf("Enter Celsius=");
    scanf("%lf",&C);

    double F =(9*C/5)+32;

    printf("Fahrenheit=%lf\n",F);
    printf("Division is=%lf\n",(9*C)/5);
    //n printf("Remainder is=%lf\n",(9*C)%5);
    
    return 0;
}