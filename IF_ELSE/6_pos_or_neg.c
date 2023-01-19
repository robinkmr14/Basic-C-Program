/* C program to check whether a Number is Positive or Negative */

#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num > 0)
    printf("You entered a Positive number");
    else if ( num < 0)
    printf("you entered a negetive number");
    else
    printf("You entered 0");
    getch();
}