/* C program to check Leap year */

#include<stdio.h>
#include<conio.h>
void main(){
    int year;

    printf("Enter the year : ");
    scanf("%d",&year);

    if(year % 400 == 0 )
    printf("%d is a leap year",year);

    else if (year % 100 == 0)
    printf("%d in not a leap year",year);

    else if (year % 4 == 0)
    printf("%d is a leap year",year);

    else
    printf("%d is not a leap year",year);
    getch();
}