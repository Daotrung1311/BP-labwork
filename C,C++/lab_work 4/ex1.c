/*Exercise 1:
Write a function in C to find the greatest common divisor (gcd) of two positive integer
numbers.*/
#include<stdio.h>

int gcd(int a, int b, int c , int d){
    int min;
    if(a > b){
        min = b;} else{min= a;}
    if(c < min ) {min =c;} 
    if(d< min) {min = d;}
    
    for(int i = min; i >=1; i--){
        if(a % i==0 || b% i==0 || c%i==0 ||d%i ==0) return i;
    }
}
int main(){
    printf("Enter number a ,b, c, d: ");
    int a,b,c,d;
    scanf("%d%d%d%d", &a, &b,&c,&d);
    printf("%d", gcd(a,b,c,d));
    

    return 0;

}
