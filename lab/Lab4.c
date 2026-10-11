#include <stdio.h>
#include <math.h>
int main (){
    int n;
    int sum = 0;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
            sum = sum + pow(i,2);
        }
    printf("%d\n",sum);
    return 0;
}