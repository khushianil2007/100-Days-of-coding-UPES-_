Write a program to swap two numbers without using a third variable.
/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include<stdio.h>
int main ()
{	
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter Second number:");
	scanf("%d",&b);
	
	printf("\nBefore Swapping:\n");
	printf("First Number=%d\n",a);
	printf("Second Number=%d\n",b);
	
	printf("\nAfter Swapping:\n");
	printf("First Number=%d\n",b);
	printf("Second Number=%d\n",a);
	
	return 0;
}