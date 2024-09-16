//READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE.
#include<stdio.h>
int main()
{   //declaration of variables
    int n,flag;
    //taking input from the user
    printf("Enter the value of n: ");
    scanf("%d",&n);

    //condition if n is 1
    if(n ==1)
    {
        printf("Entered number is neither prime nor composite.");
    }
    //condition if n is 2
    else{

    if(n ==2)
    {
        flag =1;
    }
    // code for other numbers
    if(n != 1 && n !=2)
    {   //checking whether the number is prime or composite
        for(int i =2; i<n; i++ )
        {
            if(n%i == 0)
            {
                flag = 0; //declaring flag = 0 for composite number
                break;
            }
            else
            {
                flag = 1; // declaring flag =1 for composite number
            }
        }
    }
    //printing output
    if(flag == 0)
    {
        printf("Entered number is a composite number.");
    }
    if(flag == 1)
    {
        printf("Entered number is a prime number.");
    }
    }
    return 0;
}