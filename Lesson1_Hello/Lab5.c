#include <stdio.h>

int main (){
    float c;  //input f,c.
    printf("Enter Celsius = ");
    scanf("%f",&c);
    float F = (c*1.8)+32;//Convert C to F
    float K = c+273.15;//Convert C to K
    //print temperature.
    printf("Fahrenheit is = %f\n",F);
    printf("Kelvin is = %f\n",K);
    return 0;
}