#include <stdio.h>

int main(){
    int option = 0;
    float money = 0;
    float balance = 0;
    do {
        printf("\n");
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d",&option);

        if (option == 1){
            printf("Current Balance: %.2f\n",balance);
        } 
        else if (option == 2){
            printf("Enter amount to deposit: ");
            scanf("%f",&money);
            balance = balance + money;
            printf("Deposit successful.\n");
        }
        else if (option == 3){
            printf("Enter amount to withdraw: ");
            scanf("%f",&money);
            if (money <= balance){
                balance = balance - money;
                printf("Withdrawal successful.\n");
            }
            else {
                printf("Insufficient balance.\n");
            }
        }
        else {
            printf("Invalid option.\n");
        }
    }
    while (option != 4);
    printf("Thank you for using the ATM.");
    return 0;
}