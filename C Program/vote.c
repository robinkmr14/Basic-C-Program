#include<conio.h>
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d",&age);

    if(age>=18)
    printf("EligBLE FOR VOTE ");

    else
    printf("Not eligable for vote");

    return 0;
}