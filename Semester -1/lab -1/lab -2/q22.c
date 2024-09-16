//PROGRAM TO CALCULATE FACTORIAL OF A NO.

#include <stdio.h>
int fact(int n); // function declaration for factorial
int main()
{
    int n,i; // declaration of variables

    // Taking input from the user
    printf("Enter the value for which you want to calculate the factorial: ");
    scanf("%d",&n);
    //Condition check whether the user has entered a positive number
    if( n >= 0)
    {
       printf("%d is the factorial of %d", fact(n),n);// printing factorial of n
    }
    else
    {
        printf("Invalid input"); // printing error log

    }


    return 0;

}
//function definition of factorial function
int fact(int n)
{
    if(n == 0)
    return 1;
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}