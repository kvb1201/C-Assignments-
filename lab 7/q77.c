//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT
#include<stdio.h> //inclusion of standard input output header file
int reverse(int n); //function prototype for reverse function
void palindromeCheck(int n);    // function prototype for palindromeCheck function

// main function
int main()
{   //taking input from the user
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    palindromeCheck(n); //calling palindromeCheck function
}

//function defintion for reverse function - this function reverses the number
int reverse(int n)
{   int reverse =0;
    while (n !=0)
    {
    int digit = n %10;
    reverse = reverse*10 + digit;
    n = n/10;
    }

    return reverse; //returns number after reversing it
}

//function definition for palindromeCheck - this function checks whether the entered number is a palindrome or not
void palindromeCheck(int n)
{
    int r = reverse(n); //storing reverse number in variable r
    // printing the output
    if(n == r)
    printf("Entered number is a palindrome.");
    else
    printf("Entered number is not a palindrome.");
}