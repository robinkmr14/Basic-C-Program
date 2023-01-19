//  Write a program in C to count the total number of words in a string. 


#include<conio.h>
#include<stdio.h>
int main()
{
    char a[50],words,i;

    printf("Enter the string :");
    gets(a);

    i=0;
    words=1;
    while(a[i]!= 0)
    {
        if(a[i] == ' ')
        words++;
        i++;
    }
    printf("total number of words : %d",words);
    return 0;

}