#include<stdio.h>
int main(){
    char firstName[]="Sejuti";
    char lastName[]="Swapna";

    for(int i=0;firstName[i] != '\0'; i++ ){
        printf("%c", firstName[i]);
    }
    printf("\n");
    return 0;
}