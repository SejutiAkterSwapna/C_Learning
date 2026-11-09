#include<stdio.h>
int main(){
    // char arr[] = "SeJuTi4566";
    // int n = sizeof(arr)/sizeof(char);
    char arr[10];
    for(int i=0; i<10; i++){
    scanf("%s",arr[i]);
    }
    int alpha = 0,dig=0;

    for(int i=0; i<10; i++){
        if((arr[i]>='A'&&arr[i]<='Z') ||( arr[i]>='a'&&arr[i]<='z')){
            alpha++;
        }
        else if(arr[i]>='0'&&arr[i]<='1'){
            dig++;

        }
        }
    printf("%d\n",alpha);
    printf("%d\n",dig);
    return 0;
}