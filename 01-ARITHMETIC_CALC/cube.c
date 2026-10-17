//Take a number(n) from user & output its cube(n*n*n)
#include<stdio.h>
int main () {
    float n;
    printf("Enter a number : ");
    scanf("%f", &n);
    printf("CUBE of %.2f : %.2f", n,n*n*n);
    return 0;
}