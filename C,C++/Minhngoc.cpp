#include<stdio.h>
#include<math.h>
#define pi 3.14
int main(){
    double radius, circumference, area;
    double preassigned_radius = 4.00;
    area = pi*pow(preassigned_radius,2);
    circumference = 2*pi*preassigned_radius;
    printf("Radius: R = %.2f\n",preassigned_radius);
    printf("Area: A = %.2f\n",area);
    printf("Circumference: C = %.2f\n",circumference);

    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);
    area = pi*pow(radius,2);
    circumference = 2*pi*radius;
    printf("area: A = %.2f\n",area);
    printf("circumference: C = %.2f\n", circumference);

}