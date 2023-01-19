// Write a program in C to separate the individual characters from a string.

#include<conio.h>
#include<stdio.h>
int main()
{
     char a[50];
     int  i;

     printf("Enter the string : ");
     gets(a);

     i=0;
     while(a[i]!='\0')
     {
         printf("%c ",a[i]);
         i++;
     }

     return 0;
}