#include<stdio.h>
int main(){
    int N;
    int p=0,n=0,z=0;
    for(int i=1; i<=10; i++){
        printf("Enter number %d: ",i);
        scanf("%d",&N);
        if( N > 0){
            p++;
        }
        else if(N < 0){
            n++;
        }
        else{
            z++;
        }
    }
    printf("Positive number: %d\n",p);
    printf("Negative number: %d\n",n);
    printf("zero : %d\n",z);
    return 0;
}