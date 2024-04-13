#include <stdio.h>

int main(){
    
    // number
    int inputNumber;
    printf("Enter an integer: ");
    scanf("%d", &inputNumber);

    printf("Number: %d\n", inputNumber);

    // float and double

    float float_number;
    double double_number;

    printf("Enter float number: ");
    scanf("%f", float_number);

    printf("Enter double number: ");
    scanf("%lf\n", double_number);

    printf("float float = %f\n", float_number);
    printf(" double number = %lf\n", double_number);


    return 0;
}