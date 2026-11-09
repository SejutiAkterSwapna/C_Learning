#include<stdio.h>
#include<string.h>
int main(){
    char str1[100]="My name is ", str2[100]="Sejuti Swapna";
    strcat(str1,str2);
    puts(str1);
    printf("Revers : %s\n",strrev(str1));
    return 0;
}