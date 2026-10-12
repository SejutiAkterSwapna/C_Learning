#include<stdio.h>
int main(){
    int arr[] = {2,4,7,2,4};
    int len = sizeof(arr) / sizeof(int);
    int max = arr[0];

    for(int i=0; i<len; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Max = %d \n",max);
    return 0;
}