#include<stdio.h>
int main(){
    int arr[]={3, 4, 6, 1 ,5};
    int n = sizeof(arr)/sizeof(int);
    int pos = 2;
    int val = 0;
    for(int i=n; i>pos; i-- ){
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    for(int i=0;i<n;i++)
        printf("%d\n",arr[i]);
    
    return 0;
}