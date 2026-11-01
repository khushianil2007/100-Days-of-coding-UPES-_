Write a program to convert temperature from Celsius to Fahrenheit.


include<stdio.h>
int main()
{
       float celsius, farenheit;
	   printf(" enter temperature in celsius :");
	   scanf("%f", & celsius );
	   farenheit = ( celsius * 9.0/ 5.0) + 32.0;
	   printf("%.2f celsius = %.2f farenheit\n", celsius , farenheit);
	   return 0;
}	   