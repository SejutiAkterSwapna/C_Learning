#include<stdio.h>
#include<string.h>
int main(){
    char arr[] = "Hello World";
    char arr2[20];

    strcpy(arr2,arr);
    printf("%s\n",arr2);
    return 0;
}