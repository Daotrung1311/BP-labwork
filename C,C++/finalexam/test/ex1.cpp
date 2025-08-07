#include<stdio.h>
#include<math.h>

int main(){
    int x1,y1,x2,y2;
    int d;
    scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
    if(y2 == y1){
        d = abs( x2-x1);
        printf("%d %d %d %d", x1, y1 +d, x2, y2 +d);
    } 
    else if(x2 == x1){
        d = abs(y2-y1);
        printf("%d %d %d %d", x1+ d, y1, x2+d, y2);
    }
    else if(abs(x2-x1)== abs(y2-y1)){
        printf("%d %d %d %d", x1, y2, x2, y1);
    }
    else{printf("-1");}
    return 0;
}