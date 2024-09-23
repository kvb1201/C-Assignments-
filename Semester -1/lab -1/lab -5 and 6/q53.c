#include<stdio.h>

int main()
{
    int n ; // Number of rows in the pattern

    printf("Enter the value of n: ");
    scanf("%d",&n);

    

    for(int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for(int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");


        
    }
    for(int i =n-1; i >=1; i--)
    {
        //print leading spaces
        for(int j = n-i; j >=1; j--)
        {
            printf(" ");
        }

        //print stars

        for(int j =(2*i-1);j >=1; j--)
        {
            printf("*");
        }
        printf("\n");
    }


    

    
}