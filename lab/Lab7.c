#include<stdio.h>
int main(){
    int n;
    printf("Enter in-dex size: ");
    scanf("%d",&n);
    int num[n];
    int max =0; 
    printf("Enter Array number: ");
    for(int i=1; i<n; i++){
        scanf("%d",&num[i]);  
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(num[i]<num[j]){
                max = num[j];
            }
        }
    }
    printf("Max = %d\n",max);
    return 0;
}