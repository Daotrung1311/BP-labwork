/*Exercise 1: Write a C program to enter a natural number n (n > 1), and find all the divisors of n*/
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i<= n; i++){
        if(n%i ==0){
            printf("the divisors of n = %d\n", i);
        }
    }

    return 0;
}