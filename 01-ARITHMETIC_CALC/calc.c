#include <stdio.h>

int main () {
    int a, b;
    char op;
    
    printf("Enter a : ");
    scanf("%d", &a);
    
    printf("Enter b : ");
    scanf("%d", &b);
    
    printf("CHOOSE Operator (+,-,%%,/,*) : ");
    
    // THIS LINE FLUSHES THE VS CODE TERMINAL BUFFER COMPLETELY:
    while (getchar() != '\n' && getchar() != EOF); 
    
    scanf("%c", &op);
    
    switch(op) {
        case '+':
            printf("%d+%d=%d\n", a, b, a + b);
            break;
        case '-':
            printf("%d-%d=%d\n", a, b, a - b);
            break;
        case '*':
            printf("%d*%d=%d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) printf("%d/%d=%d\n", a, b, a / b);
            else printf("Error: Division by zero\n");
            break;
        case '%':
            if (b != 0) printf("%d %% %d=%d\n", a, b, a % b);
            else printf("Error: Modulo by zero\n");
            break;
        default:
            printf("INVALID\n");
    }
    return 0;
}
