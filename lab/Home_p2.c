#include<stdio.h>
int main(){
    int arr[] = {3,8,5,6,4,7,1,9};
    int n = sizeof(arr)/sizeof(int);
    int key, found = 0;
    printf("Enter a key: ");
    scanf("%d",&key);
    for(int i=0; i<n; i++){
        if(key == arr[i]){
            printf("%d index is %d\n",key,i);
            found = 1;
            break;
        }
    } 
    if(found == 0){
        printf("%d NOT available\n",key);
    }
      
    return 0;
}