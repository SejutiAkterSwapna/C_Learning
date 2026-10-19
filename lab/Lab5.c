#include<stdio.h>
int main(){
    int s;
    printf("Enter in-dex size: ");
    scanf("%d",&s);
    int num[s];
    printf("Enter Array number: ");
    for(int i=0; i<s; i++){
        scanf("%d",&num[i]);
    }
    int max = num[0];
    int mini = num [0];

    for(int i=0; i<s; i++){
        if(num[i] > max){
            max = num[i];
        }
        else if(num[i]<mini){
            mini = num[i];
        }
    }
    int frequency1 = 0;
    for(int i=0; i<s; i++){
        if(num[i] == max){
            frequency1 = frequency1+1;
            printf("Mex index = %d \n", i);
        } 
    }    
    int frequency2 = 0;
    for(int i=0; i<s; i++){
        if(num[i] == mini){
            frequency2 = frequency2+1;
            printf("Mini index = %d \n", i);
        }         
    }

    printf("Maximum number is = %d \n",max);
    printf("Max Frequency is = %d \n",frequency1);

    printf("Minimum number is = %d \n",mini);
    printf("Mini Frequency is = %d \n",frequency2);

    return 0;
}
