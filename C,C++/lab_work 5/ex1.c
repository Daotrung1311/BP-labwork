/*Exercise 1: Write a C program to find the minimum and maximum number in a given series
of n numbers stored in a static or dynamic (from the keyboard) array.*/
#include<stdio.h>
#include<math.h>

int main(){
    int n,i;

    int arr[n];
    scanf("%d", &n);


    for(i = 0; i <n; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(i = 0; i < n; i++){

        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("max= %d\n", max);
    printf("min= %d\n", min);


    return 0;
}