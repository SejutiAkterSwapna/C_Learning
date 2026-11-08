#include<stdio.h>
int main(){
    char name[100];
    //gets(name);
    // puts(name);
    scanf("%[^\n]s",name);
    printf("%s\n",name);
    //printf(name);
    printf("%lu\n",sizeof(name));

    return 0;
}