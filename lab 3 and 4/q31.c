// PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.
#include<stdio.h> // inclusion of standard input output header file
int sumofdigits(int n); // function definition for sum of digits
int main()
{   int n; // declaration of variable to store user's input
    //taking input from the user
    printf("Enter the value of n: ");
    scanf("%d",&n);
    //printing the sum of digits of the entered number by calling sumofdigits function
    printf("%d is the sum of digits of entered number.",sumofdigits(n));
    return 0;
    
    


}

//function definiton for sumofdigits
int sumofdigits(int n)
{
    int sum = 0; //declaration and initialisation of sum variable with value 0
    //code for calculating sum of digits
    while (n != 0)
    {
        int digit = n%10;
        sum = sum +digit;
        n = n/10;
    }

    return sum ; //returning the value of sum to main function
    
}
