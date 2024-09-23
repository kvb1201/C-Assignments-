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
    int n; //declaration of variable to store user's input

    //taking input from the user
    printf("Enter the value of n: ");
    scanf("%d",&n);

    //triggering the loop for printing the pattern
    for(int i =1; i <=n; i++)
    {
        for(int j =1; j <=i; j++)
        {
            printf("%d",j); //printing the value of j to print the numbers from 1 to i
            if(j == i)
            for(int k =j-1; k >=1; k--)
            {
                printf("%d",k); //printing numbers from i to 1
            }
        }
        printf("\n");
    }


}