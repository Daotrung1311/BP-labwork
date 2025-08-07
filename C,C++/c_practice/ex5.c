/*
Exercise 5: Write a C program to print Fibonnacci series upto n, n is an interger input from the
keyboard.*/

//1+1= 2,1+2=3, 2+3=5,3+5=8
#include<stdio.h>
int main(){
    int n;
    int num1= 0, num2=1;
    scanf("%d", &n);
    for(int i = 1; i<= n;i++){
        int nextnum = num1 + num2;
        num1 = num2;
        num2 = nextnum;
        printf("%d, ", nextnum);
    }
    return 0;
}