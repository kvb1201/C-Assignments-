/*
89)WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF
SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr1[n] ;//array to store elements
    int arr2[n]; // array to store reversed elements

    for(int i =0; i < n; i++)
    {
        printf("Enter the element at index %d: ",i+1);
        scanf("%d",&arr1[i]);
    }

    //copying elements in arr2 in reversed order

    for(int i =0; i <n; i ++)
    {
        *(arr2+i) =*(arr1+n-i-1); 
    }
    //printing elements of arr2

    for(int i =0; i <n; i++)
    {
        printf("%d\t",arr2[i]);
    }
return 0;
}