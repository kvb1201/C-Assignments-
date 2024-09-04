//PROGRAM TO PRINT TABLE OF ANY NO.
#include <stdio.h>
int main ()
{
    int n; // Declaring variable to store the no. for which the table has to be printed

    // taking input from the user
    printf("Enter the number for which you want the table to be printed: ");
    scanf("%d",&n);
    //logic for printing the table
    for(int i =1 ; i <= 10; i++)
    {
        printf("%d times %d is %d\n",n,i,n*i);

    }

    return 0;

}