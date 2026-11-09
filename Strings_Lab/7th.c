#include<stdio.h>
#include<string.h>
int main(){
    char arr[20] = "Sejuti";
    char rev[20];
    // for(int i=20; i>=0; i--){
    //     printf("%c",arr[i]);
    // }
    // printf("\n");
    int size = strlen(arr);
    int i = 0;
    while(size--)
    {
        printf("%c ",arr[size]);
        rev[size] = arr[size];
    }
    for(int i = 0; i<size;i++){
        printf("%c ",rev[i] );
    }
    return 0;
}