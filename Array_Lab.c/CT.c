#include<stdio.h>
int main(){
    int arr[5]={6,7,3,9,5};
    int max=arr[0],max2nd=arr[0],found=0;
    for(int i=0;i<5;i++){
        if(arr[i] > max){
            max2nd = max;
            max = arr[i];
            found = 1;
        }
        if(arr[i]<max && (found==0 || arr[i]>max2nd)){
            max2nd = arr[i];
            found = 1;
        }
    }
    printf("Second Largest %d\n",max2nd);
    return 0;
}