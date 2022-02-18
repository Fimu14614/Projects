#include <stdio.h>
int main()
{
    double arr[]={0.0099,0.012,0.016,0.016,0.87,0.015,100.57,84.76,63.03,63.41,1.14,68.02};

    double  Balance, currency ;
    int opinion , choice;

    while(opinion != 2 )
    {

        printf("\n                             ***** WELCOME TO CURRENCY CONVERTER SYSTEM *******\n");
        printf("                               ----------------------------------------------------\n\n");


        printf("1)   TK to EURO               \n");
        printf("2)   TK to US Dollars         \n");
        printf("3)   TK to Singapore Dollar   \n");
        printf("4)   TK to Australian Dollars \n");
        printf("5)   TK to Indian Rupee       \n");
        printf("6)   TK to Canadian Dollar    \n");

        printf("\n7)   EURO to TK             \n");
        printf("8)   US Dollars to TK         \n");
        printf("9)   Singapore Dollar to TK   \n");
        printf("10)  Australian Dollars to TK \n");
        printf("11)  Indian Rupee to TK       \n");
        printf("12)  Canadian Dollar to TK    \n");


        printf("\nPlease enter your choice (1-12): ");
        scanf("%d",&choice);



        while((choice<1) && (choice>12))
        {
            printf("Invalid entry, please Enter 1-12: ");
            scanf("%d",&choice);
        }

        if(choice==1)
        {
            printf("\nPlease enter Bangladesh Taka:  ");
            scanf("%lf", &currency);
            Balance = currency* arr[0];
            printf("%.2lf TK = %.2lf Euro\n", currency, Balance);

        }
        else if(choice==2)
        {
            printf("\nPlease enter Bangladesh Taka:  ");
            scanf("%lf", &currency);
            Balance = currency* arr[1];
            printf("%.2lf TK = %.2lf USD\n", currency, Balance);

        }
        else if(choice==3)
        {
            printf("\nPlease enter Bangladesh Taka:  ");
            scanf("%lf", &currency);
            Balance = currency* arr[2];
            printf("%.2lf TK = %.2lf SGD\n", currency, Balance);

        }
        else if(choice==4)
        {
            printf("\nPlease enter Bangladesh Taka:  ");
            scanf("%lf", &currency);
            Balance = currency* arr[3];
            printf("%.2lf TK = %.2lf AUD\n", currency, Balance);

        }
        else if(choice==5)
        {
            printf("\nPlease enter Bangladesh Taka:  ");
            scanf("%lf", &currency);
            Balance = currency* arr[4];
            printf("%.2lf TK = %.2lf RS\n", currency, Balance);

        }

        else if(choice==6)
        {
            printf("\nPlease enter Bangladesh Taka:  ");
            scanf("%lf", &currency);
            Balance = currency* arr[5];
            printf("%.2lf TK = %.2lf CAD\n", currency, Balance);

        }

        else if(choice==7)
        {
            printf("\nPlease enter Euro:  ");
            scanf("%lf", &currency);
            Balance = currency* arr[6];
            printf("%.2lf Euro = %.2lf TK\n", currency, Balance);

        }


        else if(choice==8)
        {
            printf("\nPlease enter US Dollars:  ");
            scanf("%lf", &currency);
            Balance = currency* arr[7];
            printf("%.2lf US Dollars = %.2lf TK\n", currency, Balance);

        }

        else if(choice==9)
        {
            printf("\nPlease enter Singapore Dollar:  ");
            scanf("%lf", &currency);
            Balance = currency* arr[8];
            printf("%.2lf Singapore Dollar = %.2lf TK\n", currency, Balance);

        }

        else if(choice==10)
        {
            printf("\nPlease enter Australian Dollars:  ");
            scanf("%lf", &currency);
            Balance = currency* arr[9];
            printf("%.2lf Australian Dollars = %.2lf TK\n", currency, Balance);

        }

        else if(choice==11)
        {
            printf("\nPlease enter Indian Rupee:  ");
            scanf("%lf", &currency);
            Balance = currency* arr[10];
            printf("%.2lf Indian Rupee = %.2lf TK\n", currency, Balance);

        }

        else if(choice==12)
        {
            printf("\nPlease enter Canadian Dollar:  ");
            scanf("%lf", &currency);
            Balance = currency* arr[11];
            printf("%.2lf Canadian Dollar = %.2lf TK\n", currency, Balance);

        }

        printf("\nDo you want to convert another amount (If 'Yes' then press '1' or press '2' for exit: ");
        scanf(" %d", &opinion);

    }
    return 0;
}
