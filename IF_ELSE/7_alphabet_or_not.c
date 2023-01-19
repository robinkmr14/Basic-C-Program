#include<stdio.h>
#include<conio.h>
void main()
{
    char A;
    printf("Enter the character : ");
    scanf("%c",&A);
    if((A >= 'A' && A <= 'Z') || ( A >= 'a' && A <= 'z'))
    printf(" %c is an alphabate",A);
    else
    printf("%c is not an alphabate",A);
    getch();

} 