/*
    1   
   12 
  123 
 1234
12345
*/

#include<stdio.h>
int main()
{
    int n; //declaration of variable to store the user's input
  int count =1; //declaration and initialization of variable count with value 1
    //taking input from the user
    printf("Enter the value of n:");
    scanf("%d",&n);
    //triggering nested loops for printing the pattern

    for(int i =1; i <= n; i ++) //loop for printing rows
    {
        for(int j =1; j <=n; j++) //loop for printing columns
        {
            if(i+j >n) //pattern condition
            {
                printf("%d",count);

                count ++;
                if(j == n)
                count =1;
             
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


}