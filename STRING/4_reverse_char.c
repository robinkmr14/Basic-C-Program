// Write a program in C to print individual characters of string in reverse order.

#include<conio.h>
#include<stdio.h>
int main()
{
     char a[50];
    int i,j;

    printf("enter the string : ");
    gets(a);

    i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    
    for(j=i; j>=0; j--)
    {
        printf("%c ",a[j]);
    }
    return 0;
}
    