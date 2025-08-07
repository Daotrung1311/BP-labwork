/*Exercise 2: Write a C program to enter a positive integer number n and calculate the sum of
even and odd numbers from 1 to n. */
#include<stdio.h>
#include<math.h>

int main(){
    int n; 
    scanf("%d", &n);
    int count1 = 0;
    int count2 = 0;

    for(int i = n;  i >= 1; i--){
        if(i%2 == 0){
            count1 += i;
        }
        if(i%2 != 0){
            count2 += i;
        }

    


    }
    printf("sum of even number = %d", count1);
    printf("sum of odd number = %d", count2);
    return 0;
}