//// Using Function (WITH ARGUMENT WITH RETURN) to print Sum of series.


#include <conio.h>
#include <stdio.h>
int factorial(int);     //Function Declaration(GLOBAL DECLARATION).
int main()
{
    int sum;
    sum = factorial(1) / 1 + factorial(2) / 2 + factorial(3) / 3 + factorial(4) / 4 + factorial(5) / 5;
    printf(" The sum of the Series is: %d", sum);
}
int factorial(int n)        // Formal Arguments(Function Defination).
{
    int i, fact = 1;
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}
