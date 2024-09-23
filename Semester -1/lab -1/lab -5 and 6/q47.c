/*print the pattern
A
AB
ABC
ABCD
*/


#include<stdio.h>
int main()
{
    int n;//declaring variable to store user's input
    //taking input from the user
    printf("Enter the value of n:");
    scanf("%d",&n);
    //printing pattern using nested loops
    for(char i = 1 ; i <=  n; i++)
    {
        for(char j ='A'; j < 65+i; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}