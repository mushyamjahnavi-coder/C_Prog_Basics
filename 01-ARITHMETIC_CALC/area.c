//Perimeter and Area of a Rectangle
#include<stdio.h>
int main () {
//Perimeter of Rectangle
    float l,b;
    printf("Enter length : ");
    scanf("%f", &l);
    printf("Enter breadth : ");
    scanf("%f", &b);
    printf("Perimeter of Rectangle : %.2f\n", 2*(l+b));
//Area of Rectangle
    printf("Area of Rectangle : %.2f\n", l*b);
    return 0;
}