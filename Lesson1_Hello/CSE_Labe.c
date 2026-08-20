#include<stdio.h>
int main(){
    //select r,pi
    double r, pi=3.1416;
    printf("Enter the radius= ");
    scanf("%lf",&r); //scanf r 

    //print circle area
    printf("Area of a circle is = %lf\n",pi*(r*r)); 
    
    // print circumference circle
    printf("Circumference of a circle is = %lf\n",2*pi*r); 
    
    
    return 0;
}