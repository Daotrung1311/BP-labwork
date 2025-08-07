#include<stdio.h>



int power(int x, int n){
    if(n ==0 ) return 1;
    else{
        return x * power(x, n-1);
    }
}
int main(){
    int n, a;
    scanf("%d", &n);
    scanf("%d", &a);

    printf("power: %d", power(n, a));
    return 0;
}
