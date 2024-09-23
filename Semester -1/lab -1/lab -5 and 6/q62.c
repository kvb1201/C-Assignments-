//PROGRAM TO REVERSE AN ARRAY.
#include<stdio.h>
int main()
{    //declaration of array
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int arr[n];

    //taking data for arrray
    for(int i =0; i <n; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
    }

    //printing the normal array
    printf("Entered Array\n");
    for(int i =0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }


    //reversing the array
    for(int i =0; i <n/2; i++)
    {
        int c;
        c = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = c;
    }
    //printing the reversed array
    printf("\nThe reversed array is \n");
    for(int i =0; i <n; i ++)
    {
        printf("%d ",arr[i]);
    }
}