
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    int fac = 1;
    
    for (int i = n; i >=1; i--) 
    {
        fac *= i; 
 
    }
    printf("Factorial of %d is %d", n, fac);

    return 0;
}