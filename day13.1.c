Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>
int main(){
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator: ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op)
    {
        case '+':
            printf("Addition = %d", a + b);
            break;

        case '-':
            printf("Subtraction = %d", a - b);
            break;

        case '*':
            printf("Multiplication = %d", a * b);
            break;

        case '/':
            if(b != 0)
                printf("Division = %.2f", (float)a / b);
            else
                printf("Division by zero is not possible");
            break;

        case '%':
            if(b != 0)
                printf("Remainder = %d", a % b);
            else
                printf("Modulo by zero is not possible");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
