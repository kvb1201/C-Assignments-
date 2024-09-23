/*print
A
BB
CCC
DDDD
EEEEE


*/


#include<stdio.h> //inclusion of standard input output header file
int main()
{   
    int n; // declaring variable for storing user's input

    // taking input from the user
    printf("Enter the value of n: ");
    scanf("%d",&n);
//triggering the loop for printing the required pattern
    for(char i ='A'; i <=65+n; i++)
    {
        for(int j =65 ; j<=i;j++ )
        {
            printf("%c",i);//printing the value of variable i
        }
        printf("\n");//printing new line
    }
    return 0;
}