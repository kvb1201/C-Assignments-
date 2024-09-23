//PROGRAM TO SORT (SELECTION SORT) AN ARRAY.
#include<stdio.h>
int main()
{

       //Taking input from the user
        int n;
        printf("Enter the size of array to be declared: ");
        scanf("%d",&n);

        //declaration of an array of size n
        int arr[n];

        //Storing values in array
        for(int i =0; i <n; i++)
        {
            printf("Enter the number: ");
            scanf("%d",&arr[i]);


        }

    //selection sort algorithm
    for(int i=0; i<n; i++)
    {
        for(int j= i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }

    //printing the sorted array

    printf("The array after sorting is \n");
    for(int i =0;i <n; i++)
    {
        printf("%d \t",arr[i]);
    }

    return 0;

    
}






