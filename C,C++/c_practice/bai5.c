#include<stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int i ;
    int frac = 1 ;
    for( i = 1; i <= n; i++){
        frac *= i;
    }
    printf("%d", frac);
    return 0;
}
