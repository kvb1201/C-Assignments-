//PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.
#include<stdio.h>
int main()
{   int n;//declaration of variable to store the value of N
    //taking input from the user
    printf("Enter the value of N: ");
    scanf("%d",&n);
    
    int arr[n]; //declaration of an array of size N
    
    //storing N numbers in the array
    for(int i =0; i <n; i++)
    {
        printf("Enter number:");
        scanf("%d",&arr[i]);
 
    }

    int max = arr[0]; //declaration of max variable and intializing it value arr[0]
    //finding maximum by comparing max with all array elements
    for(int i =0; i <n; i++)
    {   
        if (max < arr[i] ) 
        max = arr[i]; 
    }
    //assigning maximum element the value 0 to evaluate second maximum
    for(int i =0; i <n; i++)
    {
        if (max == arr[i])
        arr[i] =0;
    }
    //finding second maximum
    int secondmax = arr[0];
    for(int i =0; i <n ; i++)
    {
        if(secondmax < arr[i])
        secondmax =arr[i];
    }
    //printing output
    printf("%d is the maximum and %d is the second maximum of all the entered numbers.",max,secondmax);
    return 0;
}