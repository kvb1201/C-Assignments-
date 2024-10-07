//write a function to check whether a number is even or odd
#include<stdio.h>
void evenoddcheck(int n); //function definition
//main function
int main()
{   //taking input from the user
    int n; //declaration of variable to store user's input
    printf("Enter the number: ");
    scanf("%d",&n);
    
    evenoddcheck(n);//function call
    return 0;
}

//function defimition for checking even odd
void evenoddcheck(int n)
{
    if(n %2 ==0)
    {
        printf("Entered number is even");
    }
    else
    {
        printf("Entered number is odd");
    }
}