//PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.

#include<stdio.h>
int main()
{
    int arr[3][3]; //declaration of array in the form of 3*3 matrix
    
    //storing data in the array
    for(int i =0; i <3; i++)
    {
        for(int j =0; j<3; j++)
        {
            printf("Enter number: ");
            scanf("%d",&arr[i][j]);

        }

    }

    //finding maximum value in the matrix
    int max = arr[0][0];

    for(int i =0; i <3; i++)
    {
        for(int j =0; j<3; j++)
        {
            if(max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }

    //finding minimum value in the matrix
    int min =arr[0][0];

    for(int i =0; i <3; i++)
    {
        for(int j =0; j< 3; j++)
        {
            if(min > arr[i][j])
            min = arr[i][j];
        }
    }
    //printing the output
    printf("%d is the maximum and %d is the minimum of the entered number",max,min);

    return 0;

}