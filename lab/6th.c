#include<stdio.h>
int main(){
    int N = 5;
    char cr = 'A';

    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            printf("%c ",cr+j-1);

        }
        printf("\n");
    }
    return 0;
}