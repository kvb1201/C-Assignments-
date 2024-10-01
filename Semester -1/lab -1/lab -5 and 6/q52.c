/*
print
   1
  121
 12321
1234321


*/

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
    //printing the number till i
        for(int j = 1; j <= (2 * i - 1); j++)
        {
            printf("%d",j);
            if(j == i )
            break;

            
        }
        //printing numbers from i to 1
        for(int j =i-1; j >=1; j --)
        {
            printf("%d",j);
        }

        // Move to the next line after each row
        printf("\n");

    }
}