// C program to display Character from A to Z usin Loop.

#include<stdio.h>
#include<conio.h>
void main()
{
    char i;
    printf("Uppercase Alphabate : ");
    for(i='A' ; i<='Z' ; i++)
    {
        printf("%c ",i);
    } 
        printf("\n");

        printf("Lowercase Alphabate : ");
    for(i='a' ; i<='z' ; i++)
    {
        printf("%c ",i);
    }
    getch();
}