/*
READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM
OF DIGIT OF N
*/
#include<stdio.h> //inclusion of standard input output library

int sumofdigits(int n); //function declaration to calculate the sum of digits
int main()
{
    int n; // declaration of variable to store the value of n
    // taking input from the user
    printf("Enter the number: ");
    scanf("%d",&n);


    int sum1 = sumofdigits(n);// calculating sum of digits of entered number
   int  sum2 = sumofdigits(sum1); //calculating sum of digits of answer
   printf("%d",sum2);// printing the sum of digit of answer
   return 0;


}

int sumofdigits(int n) //function definition for sumofdigits
{   //code for calculating sum of digits
    int sum = 0;
    while(n != 0)
    {
        int digit = n%10;
        sum = sum + digit;
        n = n/10;

    }
    return sum; // returning the value of sum to main function
}