// Program to create a simple calculator
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool conditional=true;
    double n1, n2;


    while (conditional)
    {
        printf("Enter an operator\n (Sum=1, multiply=2, subtract=3, divide=4 ): ");
        int operation;
        scanf("%d", &operation);

        switch(operation)
        {
            case 1:
                int sumNumber=0;
                printf("how many numbers will you have to operate: ");
                int n;
                scanf("%d", &n);
                for(int i=0;i<n;i++)
                {       
                    int number;

                    printf("Insert number %d :",(i+1));
                    scanf("%d",&number);
                    sumNumber+=number;
                }
        
                printf("The sum of numbers is %d \n", sumNumber);
                break;

            case 2:
                int mulNumber=0;
                int c;

                printf("how many numbers will you have to operate: ");
                scanf("%d", &c);
                for(int i=0;i<c;i++)
                {       
                    int number;

                    printf("Insert number %d :",(i+1));
                    scanf("%d",&number);
                    mulNumber*=number;
                }
        
                printf("The sum of numbers is %d \n", mulNumber);
                break;

            case 3:
                int minuendo;
                int subtrahend;

                printf("Insert minuendo number: ");
                scanf("%d",&minuendo);

                printf("Insert subtrahend number: ");
                scanf("%d",&subtrahend);

                printf("%.1lf - %.1lf = %.1lf\n",minuendo, subtrahend, minuendo-subtrahend);
                break;


            case 4:
                int dividend;
                int divisor;

                printf("Insert dividend number: ");
                scanf("%d",&dividend);

                printf("Insert divisor number: ");
                scanf("%d",&divisor);

                printf("%.1lf / %.1lf = %.1lf",dividend, divisor, dividend/divisor);
                break;

            // operator doesn't match any case constant +, -, *, /
            default:
                printf("Error! operator is not correct");
        }
        int confirmation;
        printf("you want to continue to perform operations \n(Continue=1; Cancel=0) : ");
        scanf("%d",&confirmation);

        if (confirmation==0)
        {
            conditional=false;
            
        }
        



    }
    




    return 0;
}