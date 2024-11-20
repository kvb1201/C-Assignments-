//WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.

#include<stdio.h>
int main()
{   
    int n;//declaration of variable to store the size of array
    //taking input for n
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr1[n]; // declaration of an integer type array of size n

    //taking input for the array
    for(int i =0; i <n; i++)
    {
        printf("Enter the element to be stored at index %d: ",i+1);
        scanf("%d",&arr1[i]);
    }

    int arr2[n]; //array to store elements of arr1


for(int i =0; i <n; i++)
{
*(arr2+i) = *(arr1+i);
}

    for(int i =0; i <n; i++)
    {
        printf("%d\t",arr2[i]);
    } 
return 0;
}