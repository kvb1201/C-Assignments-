//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, NEGATIVE, AND ZERO ELEMENTS.

#include<stdio.h>
#include <time.h>
int main ()
{
 int arr[10]; //declaration of an array of size 10

 int poscount =0; //declaration of variable to store the count of positive numbers and intializing with value 0
 int negcount =0;//declaration of variable to store the count of negative numbers and intializing with value 0
 int zerocount =0;//declaration of variable to store the count of zeroes and intializing with value 0

 for(int i =0; i <10; i++) //triggering the loop to store the input in array
 {  //taking input from the user
    printf("Enter number: ");
    scanf("%d",&arr[i]);
    //counting positive numbers, negative numbers and zeroes
    if(arr[i]==0)
    zerocount ++;

    if(arr[i] >0)
    poscount++;

    if(arr[i]<0)
    negcount++;


 } 
//printing output
 printf("You have entered %d zeroes, %d positive numbers and %d negative numbers.",zerocount,poscount,negcount) ;
 return 0;
}