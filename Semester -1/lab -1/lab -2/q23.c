//PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>).

#include <stdio.h>
int power(int a, int b);
int main()
{   int a , b; // declaration of variable a to store base and variable b to store power

    //Taking input from the user
    printf("Enter base and power respectively: ");
    scanf("%d %d",&a,&b);

    //Printing answer by calling power function
    printf("%d raised to power %d is %d",a,b,power(a,b));
    return 0;

}
// function definition of power function
int power(int a, int b)
{   // Using recursion to calculate power of a number
    if (b == 0)
    {return 1;}

    int n = power(a, b-1);
    int result = a *n;
    return result;
    
}