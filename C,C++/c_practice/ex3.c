/*Exercise 3: Enter a integer number n and calculate the sum of a series : 1 + 1/2 + 1/3 +...+1/n */
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    float sum = 0.0;
    for(float i =1; i<=n; i++){
        sum += 1.0/i;

    }
    printf("he sum of a series : 1 + 1/2 + 1/3 +...+1/n = %.2f", sum);
    return 0;
}