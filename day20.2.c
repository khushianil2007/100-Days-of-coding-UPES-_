Write a program to find the 1’s complement of a binary number and print it.


#include <stdio.h>

void complement(int n)
{
    if (n > 0)
    {
        complement(n / 10);

        if (n % 10 == 0)
            printf("1");
        else
            printf("0");
    }
}

int main()
{
    int n;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    printf("1's complement = ");
    complement(n);

    return 0;
}
