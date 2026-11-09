#include<stdio.h>
int main(){
    char arr[] = "SeJuTi";
    int leng = 0;
    int n = sizeof(arr)/sizeof(char);
    for(int i=0; i<n; i++){
        leng++;
        }
    printf("%d\n",leng);
    return 0;
}