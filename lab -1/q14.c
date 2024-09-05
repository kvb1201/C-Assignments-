/* PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL CASE
LETTER, A DIGIT OR A SPECIAL SYMBOL. */
#include<stdio.h>
int main()
{
    char a; // declaration of variable
    // taking input from the user
    printf("Enter the character : ");
    scanf("%c",&a);

    // code logic for detection of character type
    int i = a;
    (i >= 65 && i <= 90) ? printf("%c is a capital letter.",a):(i >= 97 && i <= 122)? printf("%c is a small letter",a): (i >= 48 && i <= 57)? printf("%c is a digit",a) : printf("%c is a special symbol.",a);
    return 0;
    
}