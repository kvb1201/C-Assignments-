// PROGRAM TO REVERSE OF A GIVEN NO.
#include<stdio.h> // inclusion of standard input output header file

int reverse(int n);// function declaration for reverse function
int main()
{
    int n; //declaration of variable to store user's input
    //taking input from the user
    printf("Enter the value of n: "); 
    scanf("%d",&n);
    //printing the reverse of the entered number
    printf("%d",reverse(n));


}

int reverse(int n)
{   
    int reverse =0;// defining reverse variable = 0
    //code for reversing the number
    while ((n != 0))
    {
        int digit = n%10;
        reverse = digit + reverse*10;
        n = n/10;
    }
    return reverse; //returning reverse of the entered number to the main function
    
}