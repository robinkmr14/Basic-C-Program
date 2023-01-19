// C program to Display Fibonacci Sequence

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a=0,b=1,c;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("%d, %d, ",a,b);
    for(i=3 ; i<=n ; i++)
    { 
         //printf("%d + %d = %d\n",a,b,a+b); show the output how to Execute the program.
    c = a+b;
    a = b;
    b = c;
        printf("%d, ",c);
    }
    getch();
}