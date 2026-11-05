#include<stdio.h>
int main(){
    int nums[] = {2, 7, 11, 15};
    int n = sizeof(nums)/sizeof(int);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int sum = i+j;
            if(sum == 22){
                printf("%d, %d\n",i,j);
            }
        }
    }
    return 0;
}