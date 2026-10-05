#include<stdio.h>
int main(){
    char ch;
    printf("Enter a charucter ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        ch = ch - 32;
        printf("Upper case is %c \n",ch);
    }
    else if(ch>='A'&&ch<='Z'){
        ch = ch + 32;
        printf("Lowercase is %c \n",ch);
    }

}