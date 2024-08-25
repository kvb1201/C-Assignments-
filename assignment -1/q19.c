/* PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT
NOT USING CONDITIONAL OPERATOR.*/

#include <stdio.h>
int main()
{
    char a; //declaration of variable to store user's input

    // taking input from the user
    printf("Enter the character: ");
    scanf("%c",&a);

    int i = a;

    if( i >= 97 && i <= 122)
    {
        printf("Entered character is a small case letter.");
    }
    else
    {
        printf("Entered character is not a small case letter. ");
    }

    return 0;

}
