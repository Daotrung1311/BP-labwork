/*Exercise 5: Enter a matrix A of size n, (n is input from the keyboard), let’s calculate:
- The sum of all the matrix A’s elements
- Print the transposed matrix of A
- (option)The Determinant of the matrix A
- (option) The inversed matrix of A
*/

//transpose


#include<stdio.h>
#include<math.h>

int tong(int a[][100],int n ){
    printf("sum function: " );
    int sum = 0; 
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n ; j ++){
            sum += a[i][j];
        }
    }
    printf("sum of all elements in matix is: \n%d", sum);
}

int transpose(int a[][100], int T[][100], int n){
    printf("\ntranspose matrix: \n");
    for(int i = 0; i < n ; i ++){
        for(int j = 0; j < n ; j++) T[j][i] = a[i][j];
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < n ; j++){
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
}



int main(){
    
    int n;

    scanf("%d", &n);
    int a[100][100];
    int T[100][100];
    for(int i = 0; i < n ; i++){
        for( int j  =0; j < n; j++) scanf("%d", &a[i][j]);
    }
    tong(a, n);
    transpose(a,T, n);

    return 0;
}