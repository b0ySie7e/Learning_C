#include <stdio.h>

int main(){
    //int
    int myvar;
    myvar=0;  

    // float and double
    float salry;
    double price;
    float normalizationFactor = 22.442e2;
    
    // char

    char test='h';

    // short and long

    short a;
    long b;
    long long c;
    long double d;
    printf("size of short = %d bytes\n", sizeof(a));
    printf("size of long = %d bytes\n", sizeof(b));
    printf("size of long long = %d bytes\n", sizeof(c));
    printf("size of long double= %d bytes\n", sizeof(d));

    return 0;
}