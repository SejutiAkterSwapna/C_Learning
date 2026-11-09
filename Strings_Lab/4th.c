#include<stdio.h>
#include<string.h>
int main(){

    char name[]="sejuti swapna";
    char Cname1[20],Cname2[20];
    strcpy(Cname1,name);
    strcpy(Cname2,name);
    printf("%s\n%s\n%s\n",name,Cname1,Cname2);
    //printf("Lent %d\n",strlan(name));
    return 0;
}