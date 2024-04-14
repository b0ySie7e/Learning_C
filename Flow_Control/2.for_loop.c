#include <stdio.h>

int main(){
    
    //Sum of n numbers 
    int n;
    int sumNumber=0;
    printf("how many numbers will you insert?: ");
    scanf("%d",&n);


    for(int i=0;i<n;i++){
        int number;

        printf("Insert number %d :",(i+1));
        scanf("%d",&number);
        sumNumber+=number;
    }
    
    printf("The sum of numbers is %d", sumNumber);

    return 0;
}