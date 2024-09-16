/*
READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND
CALCULATE SUM OF A LIST OF NUMBERS READ.
*/


#include<stdio.h>
int main ()
{   
    int n;// declaring variable to store user's input
    int sum = 0;// declaraing variable to calculate sum
    //triggering loop to take positive inputs
    for(int i =1; ; i++) 
    {   //taking input from the user
        printf("Enter the number: ");
        scanf("%d",&n);
        //checking whether the number is positive
        if(n >= 0)
        //sum for positive number
        {   
        sum = sum +n;
        
        }
        //breaking the loop if negative number is entered
        else
        {
            break;
        }

    

    }

    printf("%d is the sum of entered positive numbers",sum);
    return 0;
}