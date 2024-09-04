// PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.
#include<stdio.h> //inclusion of standard input output header file
#include<math.h>    //inclusion of math header file

int countdigits(int n);// function declaration for counting digits of entered number
int armstrongcheck(int n, int digits);  //function declaration for checking armstrong 
int main()
{   int n;//declaration of variable to store user's input
// Taking input from the user
   printf("Enter the value of n : ");
   scanf("%d",&n);
   // checking for armstrong number and printing the output
   if(n == armstrongcheck(n,countdigits(n)))
   {
    printf("Entered number is an armstrong number.");
   }
   else
   {
    printf("Entered number is not an armstrong number.");
   }
    
}
//function definition for counting digits
int countdigits(int n)
{
    int digits = 0;
    while (n != 0)
    {
        n = n/10;
        digits ++;
    }
    return digits;
}
//function definition for checking armstrong number
int armstrongcheck(int n, int digits)
{
    int sum = 0;
    while(n != 0)
    {
        int digit = n%10;
        sum = sum + pow(digit,digits);
        n = n/10;

    }

    return sum;
}
