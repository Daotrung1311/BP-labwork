
/*
BASIC PROGRAMMING DEMO EXAM
Exercise 1(5 points):
Write a program to output the following text exactly as it appears here by using printf one time only:
"This's our C programming course".
"Welcome to the first tutorial class".
Exercise 2 (5 points): 
Write a C program to calculate a value of a polynomial 𝑎𝑥2 + 𝑏𝑥 + 𝑐 with three known constant parameters a=1, b=2, and c=1 and the variable 𝑥 input from the keyboard.
Exercise 3 (5 points):
 Write a C program to find a factorial of n, n is an integer input from the keyboard.
Exercise 4 (5 points): 
Write a function in C to find the greatest common divisor (gcd) of two positive integer numbers.
All the functions should be defined in two separated files: *.h and *.c


*/
#include<stdio.h>
#include<math.h>
//ex1

int main(){
    printf("\"This's our C programming course\".\n\"Welcome to the first tutorial class\".");


    return 0;
}

//ex2

float f(float x){

    return ((x*x) + 2*x + 1);
}
int main(void){
    printf("type x");
    int x;
    scanf("%d", &x);
    printf("calculate a value of a polynomial 𝑎𝑥^2 + 𝑏𝑥 + 𝑐 with three known constant parameters a=1, b=2, and c=1 = %.2f", f(x));
    return 0;
}
//ex3
int main(){
    int n;
    scanf("%d", &n);
    int frac = 1;
    for(int i = n; i >= 1; i--){
        frac *= i;
    }
    printf("%d", frac);
    return 0;
}

//ex4


int gcd(unsigned int a, unsigned int b){
    if(a == 0 || b == 0){
        return a+b;
    }
    int min = a < b ? a:b;
    for( int i = min; i >= 1; i--){
        if(a % min ==0 && b% min ==0){
            return i;
        }
    }

    

    return 1;
}
int main(){
    unsigned int a;
    unsigned int b;
    scanf("%d%d", &a, &b);

    printf("the greatest common divisor (gcd) of %d and %d = %d", a , b, gcd(a, b));
    return 0;
}