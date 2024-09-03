/*

21. PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK 
(USING ARITHMETIC OPERATOR)AND THIS PERFORM USING SWITCH-CASE.(CASE IN CHAR FORM).


*/

#include <stdio.h>
int main()
{
    int a,b;// declaration of variables
    // Taking input from the user
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    //Taking input from the user to perform the operation
    printf("Enter 'i' for additon.\n Enter 'j' for multiplication.\n Enter 'k' for subtraction.\n Enter 'l' for division.\n  ");
    char input;
    scanf(" %c",&input);


    //execution of operation based on user input
        switch(input)
        {
        case 'i': printf("%d",a+b);
        break;
        case 'j': printf("%d",a*b);
        break;
        case 'k': printf("%d",a-b);
        break;
        case 'l': printf("%d",a/b);
        break;

        default : printf("Invalid Input");
        break;
        

    }


    

return 0;

}