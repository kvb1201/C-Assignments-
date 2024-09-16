// READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)
#include<stdio.h>
int main()
{
    int n; // declaring variable to store user's input
    //Taking user's input
    printf("Enter the value of n: ");
    scanf("%d",&n);
    //code for printing factors
    for(int i =n; i >=1; i--)
    {
        if(n%i == 0)
        {
            printf("%d,",i);
        }
    
    }

    return 0;
}