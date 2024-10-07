/*
WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN
ZERO OTHERWISE.
*/

#include<stdio.h>   //inclusion of standard input output header file

int primecheck(int n);  //function prototype
//main function
int main()
{   //taking input from the user
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    //comdition for 1
    if(n ==1)
    printf("Entered number is neither composite nor prime.");

    else
    {
    printf("%d",primecheck(n)); //calling primecheck function to print 0 or 1 based on input
    }
    return 0;
}
//function definiton for primecheck
int primecheck(int n)
{   int flag =1; //declaration of flag with value 1
    for(int i =2; i <n/2; i++)
    {
        if(n%i ==0)
        {
            flag = 0;  //changing flag to 0 if number is composite
            break;
        }

    }
    return flag;

}