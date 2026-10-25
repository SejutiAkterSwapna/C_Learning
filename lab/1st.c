#include<stdio.h>
int main(){
    int pMoney, expense;
    printf("Enter weekly pocket money: ");
    scanf("%d",&pMoney);
    int totalExp = 0;

    for(int i=1; i<=7; i++){
        printf("Enter expense for Day %d: ",i);
        scanf("%d",&expense);
        totalExp += expense;

    }
    printf("Total expense: %d \n",totalExp);
    printf("Remaining Balance: %d\n",pMoney-totalExp);
    
    if(pMoney > totalExp){
        printf("Status: Within Budget\n");
    }
    else{
        printf("Status: Over Budget\n");
    }

return 0;
}
