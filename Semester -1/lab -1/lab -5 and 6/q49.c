/*
print  :        *
                **
                *** 
                ****    
                *****
*/  
#include<stdio.h> //inclusion of standard input output header file
int main()
{
    int n; //declaration of variable to store user's input

    //taking input from the user
    printf("Enter the value of n: "); 
    scanf("%d",&n);
    //triggering the loop for printing the required pattern
    for(int i =1; i <=n; i++)
    {
        for(int j =1; j <=i; j++)
        {
            
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
