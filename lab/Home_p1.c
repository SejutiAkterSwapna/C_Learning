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
    int mini = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    printf("Minimum is = %d \n",mini);
    return 0;
}