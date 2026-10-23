#include<stdio.h>
int main () {
    int n;
    int count = 0;
    printf("Enter number : ");
    scanf("%d", &n);
    for(int i=n;i<=50;i++){
        if(i%n==0){
           count++;
           printf("%d\n", i);
        }
    }
    printf("Number of Multiples : %d", count);
    return 0;
}