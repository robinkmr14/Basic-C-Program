
/* C program to check whether a character is a vowel or Consonant*/


#include<stdio.h>
#include<conio.h>
void main(){
    char i;
    int uppercase,lowercase;
    printf("Enter the number:");
    scanf("%c",&i);
    uppercase = (i=='A' || i=='E' || i=='I' || i=='O' || i== 'U');
    lowercase = (i=='a' || i=='e' || i=='i' || i=='o' || i=='u');
    if(uppercase || lowercase)
    printf("%c is a Vowle",i);
    else
    printf("%c is a Consonant",i);
    getch();
}
