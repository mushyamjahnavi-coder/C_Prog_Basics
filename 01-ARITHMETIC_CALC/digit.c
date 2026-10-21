//program to check if given character is digit or not
#include<stdio.h>
int main () {
    int n;
    printf("Enter a digit : ");
    scanf("%d", &n);
    if(n>=0&&n<=9) {
        printf("%d is a digit", n);
    }
    else {
        printf("%d is not a digit... TRY AGAIN!!", n);
    }
        return 0;
}