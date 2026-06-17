#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op;
    int amnt = 10000;
    int withdraw, add;

    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Withdraw Money\n");
        printf("2. Check Balance\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                printf("Enter amount to withdraw: ");
                scanf("%d", &withdraw);

                if(withdraw > amnt)
                    printf("Insufficient Balance!\n");
                else
                {
                    amnt -= withdraw;
                    printf("%d withdrawn successfully.\n", withdraw);
                }
                break;

            case 2:
                printf("Current Balance: %d\n", amnt);
                break;

            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &add);

                amnt += add;
                printf("%d deposited successfully.\n", add);
                break;

            case 4:
                printf("Thank you for using our ATM service.\n");
                exit(0);   // Program exits here

            default:
                printf("Invalid Option!\n");
        }

    } while(1);
        return 0;
}
