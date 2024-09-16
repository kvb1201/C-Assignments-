//PROGRAM TO PRINT 2,4,6,8,10,12.........N.
#include<stdio.h>
int main ()
{   
    int n; // declaration of variable
    //Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d",&n);

    // checking whether the number is even
    if(n%2 == 0)
    {   //code for printing numbers 2,4,6 ....N
        for( int i =2; i <=n; i= i+2)
        {
            printf("%d,",i);
        }
    }
    //checking whether the number is odd
    else
    {   // code for printing 2,4,6....n-1
        for(int i = 2; i <= n-1; i = i+2)
        {
            printf("%d,",i);

        }
    }
    
    return 0;
}