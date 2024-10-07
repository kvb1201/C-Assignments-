// WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM

#include<stdio.h> //inclusion of standard input output header file
int maxArray(); //function prototype
//main function
int main()
{
    printf("%d",maxArray()); //functon call to maxArray()
}
//function definiton
int maxArray()
{   
    int n; //variable to store the size of array

    //taking input from the user
    printf("Enter the value of n: ");
    scanf("%d",&n);


    int arr[n]; //declaration of array

    //taking input for array
    for(int i =0; i <n; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&arr[i]);

    }
    //finding maximum value in the array
    int max = arr[0];
    for(int i =0; i <n; i++)
    {
        if(max < arr[i])
        max = arr[i];
    }

    return max; //returning the max value to main function
}