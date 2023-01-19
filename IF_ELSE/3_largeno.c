/*C program to find the largest number among Three numbers*/

#include<stdio.h>
#include<conio.h>
void main(){
    int num1,num2,num3;
    printf("Enter three different number:");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
    printf(" %d is the largest number",num1);

    else if (num2>num1 && num2>num3)
    printf("%d in the largest number",num2);
    
    else
    printf("%d is the largest number",num3);
}