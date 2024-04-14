#include <stdio.h>

int main(){

    //Comparison of two numbers

    int number_A;
    int number_B;

    printf("Insert number A: ");
    scanf("%d",&number_A);

    printf("Insert number B: ");
    scanf("%d",&number_B);

    if(number_A > number_B){
        printf("the number %d is great\n",number_A);
    }else{
        printf("the number %d is great\n", number_B);
    }

    //Determining whether a number is positive, negative or zero

    if(number_A>0){
        printf("the number %d is positive\n",number_A);
    }else{
        printf("the number %d is negative\n",number_A);
    }
    
    if (number_B>0){
        printf("the number %d is positive\n",number_B);
    }else{
        printf("the number %d is negative\n",number_B);
    }

    return 0;
}