//Write a program in C to rotate an array by N positions
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of index of array:");
    scanf("%d",&n);

    int arr[n];
    int arr1[n];
    
    for(int i =0; i <n; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
    }
    
    //code for rotation of an array by N positions
    int N;
    printf("Enter the value of N: ");
    scanf("%d",&N);

    for(int i =0; i <n; i++)
    {
        arr1[i] = arr[(N+i)%n];
    }






  
    //printing rotated array

    for(int i =0; i<n; i++)
    {
        printf("%d ,",arr[i]);
    }
}