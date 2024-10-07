/*
RITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.
NCR = (!N/(!R*!(N-R)));
*/

#include<stdio.h> //inclusion of standard input output header file
//function prototypes
int factorial(int num);
int nCr (int n,int r);
int main()
{   //taking inputs from the user
    int n,r;
    printf("Enter the value of n and r, respectively: ");
    scanf("%d %d",&n, &r);
    //printing result by calling nCr function
    printf("%dC%d = %d",n,r,nCr(n,r));
    
}
//function definition for factorial function
int factorial(int n)
{   if(n ==0)
    return 1;

    int result = n * factorial(n-1);
    return result;
}
//function definiton for nCr function
int nCr(int n, int r)
{
    int ans =((factorial(n))/(factorial(r)*factorial(n-r)));
    return ans;

}