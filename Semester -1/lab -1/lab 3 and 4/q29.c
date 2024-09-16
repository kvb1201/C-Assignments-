//PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.
#include<stdio.h> // inclusion of standard input output header file
int reversenumber(int n); // function declaration for reversing the number

int main()
{   int n; // declaration of variable to store the user's input
    //taking input from the user
    printf("Enter the value of n: "); 
    scanf("%d",&n);

    // checking whether the entered number is a palindrome or not and printing output
    if(n == reversenumber(n))
    {   
        printf("Entered number is a palindrome.");

    }
    else
    {
        printf("Entered number is not a palindrome.");
    }
    
   return 0;

}
// function definiton for reversenumber function
int reversenumber(int n)
{
    int reverse = 0;
    //code for reversing the number
    while (n != 0)
    {
        int digit = n%10;
        reverse = digit +reverse*10;
        n = n/10;
    }
    return reverse;
    
}