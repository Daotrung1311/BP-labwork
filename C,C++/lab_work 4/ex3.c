/*Exercise 3:
Write two C functions that compute f(x)=2.5x and g(x,y)=xy*/

#include<stdio.h>
#include<math.h>

float f(int x){
    return 2.5*x;
}
float g(int x, int y){
    return x*y;
}


int main(){
    printf("f(%d)= %.2f\n",9 ,f(9));
    printf("g(%d,%d)= %.2f", 9,12, g(9,12));
    return 0;
}