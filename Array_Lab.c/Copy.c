#include<stdio.h>
int main(){
    int n;
    printf("Enter arr size: ");
    scanf("%d",&n);
    int arr[n],arrCopy[n];

    printf("Enter arr element: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }  
    for(int i=0; i<n; i++){
        arrCopy[i]=arr[i];
    }  
    for(int i=0; i<n; i++){
        printf("%d ",arrCopy[i]);
    }  
    printf("\n");
    return 0;
}