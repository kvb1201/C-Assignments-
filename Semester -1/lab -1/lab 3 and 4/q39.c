// PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,.........N.

#include<stdio.h>
void series(int n);
int main()
{   int n;
    printf("Emter the value of n: ");
    scanf("%d",&n);
    series(n);
    
}

void series(int n)
{
    for(int i =1; i<= n; i++)
    {
        printf("%d/%d!+",i,i);

    }
}