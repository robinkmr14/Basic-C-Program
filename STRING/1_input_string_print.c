//  Write a program in C to input a string and print it.

#include<conio.h>
#include<stdio.h>
int main()
{
    char a[50];
    printf("Enter the string :");
    gets(a);
    printf("You entered :\n");
    puts(a);
    return 0;
}