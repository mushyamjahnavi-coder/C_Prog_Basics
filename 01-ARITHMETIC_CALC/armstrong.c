//Program to check if a given number is Armstrong number or not
#include<stdio.h>
int main () {
    int num, originalNum, first, second, third, sum;
    printf("Enter a 3 digit number : ");
    scanf("%d", &num);
    originalNum = num;
    first = num%10;
    second = (num/10)%10;
    third = num/100;
    sum = (first*first*first)+(second*second*second)+(third*third*third);
    if (sum==originalNum) {
        printf("%d is an Armstrong Number", originalNum);
    }
    else {
        printf("%d is not an Armstrong Number", originalNum);
    }
    return 0;
}
