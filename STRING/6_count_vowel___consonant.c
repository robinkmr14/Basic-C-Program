//  Write a program in C to count the total number of words in a string. 

#include<conio.h>
#include<stdio.h>
int main()
{
    char a[50];
    int i,vow,cons,upper,lower;

    printf("Enter the string : ");
    gets(a);

    i=0;
    vow=0;
    cons=0;
    while(a[i] != '\0')
    {
        if((a[i] <= 65 && a[i] >= 90) || (a[i] >= 97 && a[i] <= 122))
        {
             upper = (a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]== 'U');
             lower = (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u');
             if(upper || lower)
             vow++;
             else
             cons++;
             i++;
        }
    }
        printf("Total number of Vowel : %d\n Total number of consonant : %d",vow,cons);
        return 0;
}

