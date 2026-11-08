#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter arr size: ");
    scanf("%d",&n);
    int arr[n],max= arr[0],min=arr[0];

    printf("Enter arr element: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];

        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Sum %d \n",sum);
    printf("Max %d \n",max);
    printf("Min %d \n",min);
    return 0;
}