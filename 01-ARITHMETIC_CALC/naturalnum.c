//Program to check if the given number is a natural number
#include <stdio.h>
int main () {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    if(n>0){
        printf("%d is a natural number", n);
    }
    else {
        printf("Not a Natural Number!!");
    }
    return 0;
}