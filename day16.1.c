Write a program to take a number as input and print its equivalent binary representation.


#include <stdio.h>

void binary(int n)
{
    if (n > 1)
    {
        binary(n / 2);
    }

    printf("%d", n % 2);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Binary number is: ");
    binary(n);

    return 0;
}


