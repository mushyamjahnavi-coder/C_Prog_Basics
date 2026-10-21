// Program to print the smallest number of two numbers
#include<stdio.h>
int main () {
    float a,b;
    printf("Enter 2 numbers : ");
    scanf("%f%f", &a,&b);
    if (a>b) {
        printf("%.2f is smallest!!", b);
    }
    else {
        printf("%.2f is smallest!!", a);
    }
    return 0;
}