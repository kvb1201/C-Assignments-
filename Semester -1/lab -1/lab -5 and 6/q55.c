/*
PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND TOTAL NO. OF EVERY ELEMENT.
*/

#include<stdio.h>
int main()
{
    int arr[10]; //declaration of an array of size 10
    

    int evencount =0; // declaration of variable to count even numbers and initializing it's value to 0
    int oddcount =0; // declaration of variable to count odd numbers and initializing it's value to 0

    for(int i =0; i <10; i++)
    {   //taking input from the user
        printf("Enter number:");
        scanf("%d",&arr[i]);
        //counting even odd
        if(arr[i]%2 == 0)
        evencount ++;
        if(arr[i]%2 !=0)
        oddcount ++;

    }
    //printing output
    printf("You have entered %d even numbers and %d odd numbers.",evencount,oddcount);
    return 0;
}