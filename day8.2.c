Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main(){
	int a, b, c;

	printf("Enter Three Numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && a >= c){
	printf("largest is %d\n",a);
	}else if (b >= a && b >= c){
	printf("largest is %d\n",b);
	}else{
	printf("largest is %d\n",c);
	}
	return 0;
}

