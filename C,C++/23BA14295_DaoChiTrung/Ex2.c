/*Exercise 2 (5 points): 
Write a C program to calculate a value of a polynomial 𝑎𝑥2 + 𝑏𝑥 + 𝑐 with three known constant parameters a=1, b=2, and c=1 and the variable 𝑥 input from the keyboard.
*/
#include<stdio.h>
int main(){
    float x;
    const int a = 1, b=2, c=1;
    scanf("%f", &x);   
    float polynomial = a*x*x + b*x + c;
    printf("%.2f", polynomial );
    return 0;
}