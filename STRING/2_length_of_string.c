// Write a program in C to find the length of a string without using library function.

#include<conio.h>
#include<stdio.h>
int main()
{
    char a[50];
    int l;

    printf("Enter the string : ");
    gets(a);

    l=0;
    while(a[l]!='\0')
    {
        l++;
    }    
    printf("Length of the string : %d",l);

    return 0;
}