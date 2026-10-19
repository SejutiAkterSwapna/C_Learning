#include<stdio.h>
int main(){
    int n;
    printf("Enter in-dex: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum is = %d \n",max);
    return 0;
}