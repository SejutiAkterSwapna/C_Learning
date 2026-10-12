#include <stdio.h>
#include <math.h>
int main (){
    int n;
    printf("Enter in-dex : ");
    scanf("%d",&n);
    int num[n];
    int sum = 0;
    
    printf("Enter Array: ");
    for(int i=0; i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ",num[i]);
        sum = sum + num[i];   
    }
    printf("\n");
    printf("Sum = %d\n",sum);

    return 0;
}