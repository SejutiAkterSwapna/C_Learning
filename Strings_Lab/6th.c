#include<stdio.h>
#include<string.h>
int main(){
    char a[20] =  "sejuti";
    char b[20] = {'s','e','j','u','t','i','\0'};
    printf("a = %d\n",strlen(a));
    printf("b = %d\n",strlen(b));
    return 0;
}