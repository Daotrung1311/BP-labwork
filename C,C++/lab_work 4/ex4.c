/*Exervise 4:
Write a C function to enter a positive integer number and calculate n! using recursive
function.*/
#include<stdio.h>
#include<math.h>

long long factorial(unsigned long long n ){

    long long frac = 1;

    for(int i = n;i >= 1; i--){
        frac *= i;
    }
    return frac;
}

int main(){
    int num;
    printf("Enter n:\n");
    scanf("%lld", &num);
    factorial(num);
    printf("Factorial of %lld is %lld\n", num, factorial(num));

    return 0;

}