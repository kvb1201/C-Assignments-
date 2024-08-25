//PROGRAM TO PRINT ASCII CODE OF ANY CHARACTER.
#include<stdio.h>
int main()
{   
    char ch;//variable declaration
    // obtaining data from the user
    printf("Enter one character: ");
    scanf("%c",&ch);
    // obtaining and printing ascii value of entered character
    int i = ch;
    printf("Ascii value of %c is %d",ch,i );
    return 0;

}