#include<stdio.h>
int main(){
    char cr;
    printf("Enter character ");
    scanf("%c",&cr);

    if(cr=='a'||cr=='A'||cr=='e'||cr=='E'||cr=='i'||cr=='I'||cr=='o'||cr=='O'||cr=='u'||cr=='U'){
        printf("Vowel");
    }
    else if((cr>='a'&&cr<='z')||(cr>='A'&&cr<='Z')){
        printf("Consonant");
    }
    else if(cr>='0'&&cr<='9'){
        printf("Digit");
    }
    else{
        printf("Special symbol");
    }
    return 0;
}