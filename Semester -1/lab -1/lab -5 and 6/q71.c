/*
Write a program in C to find the pivot element of a sorted and rotated array
using binary search. Pivot element is the only element in input array which is
smaller than its previous element. A pivot element divided a sorted rotated array
into two monotonically increasing array.
*/


#include<stdio.h>
int main()
{
    int n; //declaration of variable to store the size of array
    //taking input from the user
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n]; //declaration of array
    //taking input for the array
    for(int i =0; i <n; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
    }

    //sorting the array using selection sort algorithm
    for(int j =0; j <n; j++)
    {
    for(int i =j+1; i <n; i++)
    {
        if(arr[j]> arr[i])
        {
            int t= arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    }

    //printing the sorted array

    for(int i =0; i <n; i++)
    {
        printf("%d\n",arr[i]);
    }

    //rotation of array by index N
    int N;
    //taking input from the user
    printf("Enter the index by which you want to rotate the array: ");
    scanf("%d",&N);
    //declaration of an array to store the sorted rotated array
    int arr1[n];
    //code for rotating the array by N positions
    for(int i =0; i <n;i++)
    {
        arr1[i] = arr[(N+i)%n];

    }
    //printing rotated sorted array
    for(int i =0; i <n; i++)
    {
        printf("%d\n",arr1[i]);
    }

    //counting number of elements in the array
    int elements = sizeof(arr1)/sizeof(arr[0]);



    //finding pivot element using binary search algorithm
    int pivot;
    int start = 0;
    int end = elements;

    while(start <= end)
    {
     int mid = (start+end)/2;
     if(arr1[mid+1] < arr1[mid])
     {
        pivot = arr1[mid+1];
        break;

     }
     else
     {
        if(arr1[start] <= arr1[mid])
        {
            start = mid +1;

        }
        else
        {
            end = mid-1;
        }
     }
\
       
        
    }

    printf("%d is the pivot element",pivot); //printing the final output


}