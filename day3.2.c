Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() 
{
    int num1, num2, temp;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Displaying values before swapping
    printf("\nBefore Swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    // Swapping logic using the third variable
    temp = num1; // 1. Save the value of num1 into temp
    num1 = num2; // 2. Assign the value of num2 to num1
    num2 = temp; // 3. Assign the saved value in temp to num2

    // Displaying values after swapping
    printf("\nAfter Swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}

