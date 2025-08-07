/*Exercise 4 (5 points): 
Write a function in C to find the greatest common divisor (gcd) of two positive integer numbers.
All the functions should be defined in two separated files: *.h and *.c
*/

#include<stdio.h>
#include"Fac.h"


int main(){

    int num1, num2;
    scanf("%d %d", &num1,&num2);
    common(num1, num2 );
    gcd(num1, num2);

    return 0;
}