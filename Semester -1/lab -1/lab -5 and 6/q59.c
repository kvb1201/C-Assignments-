//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRAYS.
#include<stdio.h>
int main()
{
    int arr1[10];   //declaration of array1 of size 10
    int arr2[10];   //declaration of array2 of size 10
    
    //taking input from the user to store data in array 1
    printf("Enter the data for array 1\n");
    
    for(int i =0; i <10; i++)
    {
        printf("Enter number:");
        scanf("%d",&arr1[i]);
    }
    //taking input from the user to store data in array 2
    printf("Enter the data for array 2\n");

    for(int i =0; i <10; i++)
    {
        printf("Enter number: ");
        scanf("%d",&arr2[i]);

    }
    //swapping 
    for(int i =0; i <10; i++)
    {
        int swap;
        swap = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = swap;
    }
        //printing values after swapping
       printf("Values after swapping\n");
    for(int i =0; i <10; i++)
    {
 
        printf("%d %d\n",arr1[i],arr2[i]);
    }
return 0;
}