#include <stdio.h>

int main()
{
    char later;
    printf("Enter Later  : ");
    scanf("%c",&later);

    switch(later){
        case 'a': printf("Vowel\n");
                break;
        case 'b': printf("Canonent\n");
                break;
        case 'c': printf("Canonent\n");
                break; 
        case 'd': printf("thursday\n");
                break;
        case 'e': printf("Vowel\n");
                break; 
        case 'f': printf("saturday\n");
                break;
        case 'g': printf("sunday\n");
                break; 
        case 'h': printf("sunday\n");
                break;
        case 'i': printf("Vowel\n");
                break;
        case 'j': printf("sunday\n");
                break;
         case 'k': printf("Canonent\n");
                break;
        case 'l': printf("Canonent\n");
                break; 
        case 'm': printf("Canonent\n");
                break; 
        case 'n': printf("Canonent\n");
                break;
        case 'o': printf("Vowel\n");
                break;
         case 'p': printf("Canonent\n");
                break;
        case 'q': printf("Canonent\n");
                break;                                                                     
        default: printf("Not a valid day!\n");                  
    }
    return 0;
}