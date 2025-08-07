//Exercise 1: Write a C program to add two numbers using pointers.

#include<stdio.h>


int main(){
    int num1, num2, sum;
    scanf("%d%d", &num1, &num2);
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    sum = *ptr1 + *ptr2;
    printf("\n%d ", sum);

    return 0;
}