//Exercise 2: Write a C function to swap two variables using pointers.
#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x= 8, y = 10;
    swap(&x,&y);
    printf("swaping %d and %d", x, y);
    return 0;
}