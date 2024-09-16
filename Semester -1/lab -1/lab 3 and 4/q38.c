/*PROGRAM TO PRINT 1,4,9,16,25,.........N*/

void squareseries(int n);// Declaring function for printing series
#include <stdio.h>
int main()
{
    int n; // declaration of variable to store user's input
    //Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d",&n);
    //calling function to print the series
    squareseries(n);
    return 0;

}
//function definition
void squareseries(int n)
{   // using loop to print the series
    for(int i = 1 ; i <= n; i++)
    {
        printf("%d,",i*i);
    }
}
