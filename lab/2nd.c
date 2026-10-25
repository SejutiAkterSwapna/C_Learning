#include<stdio.h>
int main(){
    int n;
    int even = 0, odd = 0;
    for(int i=1; i<=10; i++){
        printf("Enter integer %d: ",i);
        scanf("%d",&n);
        if(n%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Total Event Numbers: %d\n",even);
    printf("Total Odd Numbers: %d\n",odd);
    return 0;
}