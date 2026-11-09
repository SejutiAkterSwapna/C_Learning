#include<stdio.h>
int main(){
    int n,pos,val;
    printf("Enter arr size: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter arr element: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }  
    
    printf("Enter position:");
    scanf("%d",&pos);
    printf("Enter value:");
    scanf("%d",&val);

    for(int i=n; i>pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    n++;

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}