/*Exercise 3 (5 points):
 Write a C program to find a factorial of n, n is an integer input from the keyboard.
*/
#include"Fac.h"
#include<stdio.h>

int main(){
    unsigned int n;
    scanf("%d", &n);
    printf("the factional of %d is %lld", n, factional(n));
    return 0;
}