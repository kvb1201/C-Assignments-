//PROGRAM TO READ AND ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS.
#include<stdio.h>

int main()
{
    int arr[10]; //declaration of array of size 10
    int sum =0; //declaration of sum variable to calculate sum and initializing its value to 0
    //triggering the loop to store numbers in array and calculating their sum
    for(int i =0; i <10; i++)
    {
        printf("Enter number: ");
        scanf("%d",&arr[i]);

        sum = sum +arr[i];
    }

    printf("%d is the sum of entered number.",sum); //printing the output
    return 0;
}