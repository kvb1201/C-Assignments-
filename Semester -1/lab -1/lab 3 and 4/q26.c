//PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.

#include <stdio.h>
int sumOdd(int n);  //function declaration for printing sum of odd numbers between 1 and n
int sumEven(int n); //function declaration for printing sum of even numbers between 1 and n
int main()
{   int n;  //declaration of variable
    //Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d",&n);

    // printing output by calling functions
    printf("%d is the sum of all odd numbers from 1 to n,\n",sumOdd(n));
    printf("%d is the sum of all even numbers from 1 to n.",sumEven(n));
    return 0;

}
// function defintion for sum of odd numbers
int sumOdd(int n)
{   int sum =0 ; // declaration of sum variable
    
    if(n%2 == 0)    //checking if n is even
    {   //printing sum of odd numbers for even n
        for(int i =1; i <= n-1;i=i+2)
        {
            sum = sum + i;

        }

    }
    else
    {   // printing sum of odd numbers for odd n
        for (int i =1 ; i <= n; i=i+2)
        {
            sum = sum + i;
        }
    }

    return sum;
}


//function declaration for calculating sum of even numbers from  1 to n
int sumEven( int n)
{   
    int sum = 0; // declaration of variable to store the value of sum
    if(n%2 == 0) // checking whether the n is even
    {   //calculating the sum for even n
        for(int i =2; i <= n; i=i+2)
        {
            sum = sum +i;
        }
    }
    else
    {   //calculating the sum for odd n 
        for(int i = 2; i <= n-1; i=i+2)
        {
            sum = sum + i;
        }
    }
    return sum;
}