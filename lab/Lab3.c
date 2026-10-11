#include <stdio.h>
#include <math.h>
int main (){
    int n,a;
    int sum = 0;
    printf("Enter Number: ");
    scanf("%d",&a);
    printf("Enter Power: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        sum = sum + pow(a,i);
    }
    printf("%d\n",sum);
    return 0;
}