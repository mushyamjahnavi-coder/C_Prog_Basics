//C Program to print the average of 3 numbers
#include<stdio.h>
int main () {
    int a,b,c;
    printf("Enter a,b,c : ");
    scanf("%d%d%d", &a,&b,&c);
    printf("Average : %f", (a+b+c)/3.0);
    return 0;
}