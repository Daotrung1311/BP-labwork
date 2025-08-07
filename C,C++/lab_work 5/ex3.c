/*Exercise 3: Write a C program to sort an array of n elements in an increasing order (n is
constant) by three different methods: bubble sort, insertion sort and selection sort.*/

#include<stdio.h>
#include<math.h>
void printArray(int arr[], int n){
    int i;
    for(i = 0; i< n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void hubbleSort(int arr[], int n){ 
    int i, j;
    for( i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}




int main(){

    int arr[]= {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    //Print out the original array
    printf("Original array: \n");
    printArray(arr, n);

    // Sort using Bubble Sort
    hubbleSort(arr, n);
    printf("Array sorted using Bubble Sort: \n");
    printArray(arr, n);

    // Reset the array to its original state
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    // Sort using Insertion Sort
    insertionSort(arr2, n);
    printf("Array sorted using Insertion Sort: \n");
    printArray(arr2, n);

    return 0;
}