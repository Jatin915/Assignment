#include <stdio.h>

int main()
{
    int option=8, Deposit1, Withdraw1, checkBalance1, choice1;
    int Deposit2, Withdraw2, checkBalance2, choice2;
    int Deposit3, Withdraw3, checkBalance3, choice3;
    int Balance1=0, Balance2=0, Balance3=0; int exit=4;

    while(exit!=option)
    {
           printf("Which Account do you want to access? 1 or 2 or 3 or 4 to exit\n");
           scanf("%d", &option);
        if(exit!=option)
        {
            printf("Enter 1 for Deposit\n");
            printf("Enter 2 for Withdraw\n");
            printf("Enter 3 for CheckBalance\n");
        }
    if(option == 1)
    {
            scanf("%d", &choice1);
             if (choice1 == 1)
        {
            printf("Please enter the amount you want to Deposit: ");
            scanf("%d", &Deposit1);
            Balance1+=Deposit1;
        }
        else if (choice1 == 2)
        {
            printf("Please enter the amount you want to Withdraw: ");
            scanf("%d", &Withdraw1);
            Balance1-=Withdraw1;
        }
        else if(choice1 == 3)
        {
            printf("Account 1 Balance: %d\n", Balance1);
        }
        else{
            printf("wrong choice entered!!\n");
        }
        
    }

     if(option == 2)
    {
            scanf("%d", &choice2);
             if (choice2 == 1)
        {
            printf("Please enter the amount you want to Deposit: ");
            scanf("%d", &Deposit2);
            Balance2+=Deposit2;
        }
        else if (choice2 == 2)
        {
            printf("Please enter the amount you want to Withdraw: ");
            scanf("%d", &Withdraw2);
            Balance2-=Withdraw2;
        }
        else if(choice2 == 3)
        {
            printf("Account 2 Balance: %d\n", Balance2);
        }
        else{
            printf("wrong choice entered!!\n");
        }
        
    }

     if(option == 3)
    {
            scanf("%d", &choice3);
             if (choice3 == 1)
        {
            printf("Please enter the amount you want to Deposit: ");
            scanf("%d", &Deposit3);
            Balance3+=Deposit3;
        }
        else if (choice3 == 2)
        {
            printf("Please enter the amount you want to Withdraw: ");
            scanf("%d", &Withdraw3);
            Balance3-=Withdraw3;
        }
        else if(choice3 == 3)
        {
            printf("Account 3 Balance: %d\n", Balance3);
        }
        else{
            printf("wrong choice entered!!\n");
        }
        
    }
    }
    printf("Exiting...\n");
    return 0;
}