//PROGRAM TO PRINT 1,3,5,7,9.........N.
#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if( n%2 == 0)
    {
        for(int i =1; i <= n-1; i = i +2)
        {
            printf("%d,",i);
        }
        
    }
    else
    {
        for(int i = 1; i <= n; i = i+2)
        {
            printf("%d,",i);
        }
    }

    return 0;
}