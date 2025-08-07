//Exercise 3: Write a C program to access an array’s elements using pointers.
#include<stdio.h>

int main(){
    int arr[] = {3,5,7,1,7,5};
    int *ptr = arr;
    for(int i = 0; i<6; i ++ ){
        printf("%d: %d, ", i, *(arr+1));
    }
}