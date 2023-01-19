// C program to convert Binary to decimal.
// first self program.😘😘

#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i;
    int num, sum = 0, rem, x = 0;
    printf("Enter a number : ");
    scanf("%d", &i);

    while (i > 0)
    {
        rem = i % 10;   // for getting the digit value
        num = rem * pow(2, x);
        sum = sum + num;
        ++x;
        i = i / 10;

    }
    printf("%d", sum);
    getch();
}















































