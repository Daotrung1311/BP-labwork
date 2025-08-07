/*Exercise 5:
Write two C functions to calculate xn

, n and x are input from the keyboard by the normal

function and recursive function.*/
#include<stdio.h>
#include<math.h>

long long power_iterative(int x, int n) {
    long long result = 1;
    for(int i = n; i>=1; i--){
        result *= x;

    }
    return result;
}
long long power_recursive(int x, int n) {
    if(n == 0) {
        return 1;
    }

    return x * power_recursive(x, n-1);
}


int main(){
    int x, n;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);
    if (n < 0) {
        printf("This program does not support negative exponents.\n");
    } else {
        printf("%d^%d using iteration: %lld\n", x, n, power_iterative(x, n));
        printf("%d^%d using recursion: %lld\n", x, n, power_recursive(x, n));
    }
    return 0;

}