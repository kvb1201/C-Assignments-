//  PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3...)
#include<stdio.h>   //inclusion of standard input output header file

int fibonacci(int n); //function defintion for fibonacci series
int main()
{   int n; // declaration of variable to store user's input
    // Taking input from the user
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    //printing fibonacci series using loops
    for(int i =1; i <=n; i++)
    {
    printf("%d,",fibonacci(i));
    }

    return 0;


}
//function definition for fibonacci 
int fibonacci(int n)
{   //using recursion for printing fibonacci series
    if( n == 1 || n ==2) //base condition
    {
        if(n ==1)
        return 0;
        if(n ==2)
        return 1;
    }   //code logic for fibonacci
         int fibNm1 = fibonacci(n-1);
        int fibNm2 = fibonacci(n-2);
        int fibN = fibNm1 + fibNm2;
    return fibN;
}