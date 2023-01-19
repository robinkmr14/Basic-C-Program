/*  C program to compute Quotient and Remainder*/


#include<stdio.h>
#include<conio.h>
void main(){
    int dividend,divisor,quotient,remainder;

     printf("Enter the first number:");
     scanf("%d",&dividend);

    printf("Enter the second number:");
    scanf("%d",&divisor);

    quotient = dividend/divisor;

    remainder = dividend % divisor;

    printf("Quotient=%d\n",quotient);
    printf("Remainder=%d",remainder);
    getch();
}
