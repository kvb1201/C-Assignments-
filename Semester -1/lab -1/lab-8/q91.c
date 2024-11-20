/*
91)WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING
POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.
*/


#include<stdio.h>
#include<math.h>
int main()
{
    int *ptr,n; //variable and pointer declaration
    ptr =&n; // storing memory address of variable of n into ptr
    //taking input from the user
    printf("Enter the number: ");
    scanf("%d",&n);
    //square and cube
    int square = pow(*ptr,2);
    int cube = pow(*ptr,3);
    
    


    printf("%d %d",square,cube);
    return 0;
}