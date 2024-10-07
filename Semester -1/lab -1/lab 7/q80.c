// WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI

#include<stdio.h>
int fibonacci(int n);//function prototype for calculating fibonacci term
void series(int n); //function prototype for printing fibonacci series
int main()
{   //taking input from the user
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    series(n); //calling series function to print the fibonacci series

}
//using function recursion for calculation of fibonacci term
int fibonacci(int n)
{   
    if(n ==0 || n ==1)
    {
        if(n ==0)
        return 0;
        if(n ==1)
        return 1;

    }
            int fibN = fibonacci(n-1) + fibonacci(n-2);

            return fibN;

}
//printing fibonacci series
void series (int n)
{
    for(int i =1; i <=n; i++)
    {
        printf("%d,",fibonacci(i));
    }
}
