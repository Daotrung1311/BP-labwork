/*Exercise 4: Enter an array of size n, (n is input from the keyboard), then calculate the sum of
all the array elements.*/

#include<stdio.h>
#include<math.h>


int main(){
    int n , i , sum=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of all the array elements is: %d\n", sum);
    return 0;

}