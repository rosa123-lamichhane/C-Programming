#include<stdio.h>
#include<stdlib.h>
int main()
{
      int choice;
      float amount;
      printf("Enter the amount:");
      scanf("%f",&amount);
      float deposit,withdraw;

      printf("ATM MENU\n");
      printf("\n1.Deposit\n2.Withdraw\n3.Balance Query\n4.exit");
      scanf("%d",&choice);

      switch(choice)
      {
          case 1:
              printf("\nEnter the amount to deposit:");
              scanf("%f",&deposit);
              amount= amount+deposit;
              printf("\n the deposited amount %f",deposit);
              break;

          case 2:
            printf("Enter the amount to withdraw:");
            scanf("%f",&withdraw);
            amount=amount - withdraw;
            printf("\n the withdrawn amount %f",withdraw);
            break;

          case 3:
              printf("\n the total balance is:%f",amount);
              break;

          case 4:
            exit(0);
            break;


          default :
            printf("Invalid input !!");
            break;




      }



    return 0;
}
