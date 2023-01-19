/* C program to check Whether a number is Even or Odd*/


#include<stdio.h>
#include<conio.h>
void main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num % 2 == 0 && num!=0)
    {
        printf("%d is even",num);
    }
    else if (num % 2!=0 && num!=0 )
    printf("%d is odd",num);
    else
    printf("INVALID!!!!");
    getch();
}