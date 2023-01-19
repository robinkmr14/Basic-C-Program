// C program to convert decimal to binary.


#include<stdio.h>
#include<conio.h>
void main()
{
    int base=1,n,i=0,rem;
    printf("Enter a number :");
    scanf("%d",&n);

    while(n>0)
    {
    rem=n%2;
    i=i+rem*base;
    n=n/2;
    base=base*10;
    
}
    printf("%d",i);
    getch();
}