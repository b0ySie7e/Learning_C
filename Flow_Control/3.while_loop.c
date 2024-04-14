#include <stdio.h>
#include <stdbool.h>

int main(){
    bool conditional=true;
    while (conditional)
    {
    //Sum of n numbers 
        int n;
        int sumNumber=0;
        printf("how many numbers will you insert?: ");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            int number;

            printf("Insert number %d :",(i+1));
            scanf("%d",&number);
            sumNumber+=number;
        }
        
        printf("The sum of numbers is %d \n", sumNumber);

        int confirmation;
        printf("Do you want to continue adding numbers? \n(Continue=1; Cancel=0) : ");
        scanf("%d",&confirmation);
        
        printf("%d\n",confirmation);

        if (confirmation==0)
        {
            printf("[+] Exit...");
            conditional=false;
        }
        
    }
    
    return 0;
}