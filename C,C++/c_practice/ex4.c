/*Write a C program to enter a positive number and calculate product of digits of the
number using modulus operator % and while loop.*/


#include <stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int product = 1;
    
  
    while (n != 0)
    {
        product *= n % 10; 
        n /= 10; 
    }

    printf("The product of digits is: 2%d", product);

    return 0;
}