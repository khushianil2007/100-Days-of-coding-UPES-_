Write a program to display the month name and number of days using switch-case for a given month number.

#include<stdio.h>
int main() {
    int month;
printf("enter the number(1-12):");
scanf("%d", &month);
switch(month)
{
    case 1:
    printf("January \n no. of days:31");
    break;
    case 2:
    printf("February \n no. of days:28/29");
    break;
    case 3:
    printf("March \n no. of days:31");
    break;
    case 4:
    printf("April \n no. of days:30");
    break;
    case 5:
    printf("May \n no. of days:31");
    break;
    case 6:
    printf("June \n no. of days:30");
    break;
    case 7:
    printf("July \n no. of days:31");
    break;
    case 8:
    printf("August \n no. of days:31");
    break;
    case 9:
    printf("September \n no. of days:30");
    break;
    case 10:
    printf("October \n no. of days:31");
    break;
    case 11:
    printf("November \n no. of days:30");
    break;
    case 12:
    printf("December \n no. of days:31");
    break;
    default:
    printf("invalid month");
}
return 0;
}