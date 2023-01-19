/*C program to Add Two Integer*/


#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,sum;

     printf("Enter the first number:");
     scanf("%d",&i);

    printf("Enter the second number:");
    scanf("%d",&j);

    sum = i+j;
    printf("Addition of two number is :%d",sum);
    getch();
}