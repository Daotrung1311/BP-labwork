/*Exercise 2: Write a C program to enter a natural number n (n > 1), and find all the prime
numbers from 1 to n.*/

#include<stdio.h>
int main (){
    int n; 
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        int count = 0;
        for(int j = 2; j<= i/2; j++){
            if(i%j==0){
                count++;
                break;
            }

        }
        if (count == 0){
            printf("%d\n", i);
        }


    }

    return 0;
}


