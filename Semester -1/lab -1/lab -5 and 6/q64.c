//PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS.

#include<stdio.h>
int main()
{
    //declaration of 3*3 matrix
    int arr[3][3];

    //saving data in 3*3 matrix

    for(int i =0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            printf("Enter the number: ");
            scanf("%d",&arr[i][j]);
        }
    }
    //code for printing the matrix
    for(int i =0; i <3; i++)
    {
        for(int j =0; j <3; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    //code for printing the sum of all rows
    printf("The sum of rows is \n");
    for(int i =0; i <3; i++)
    {
        printf("%d \n",arr[i][0]+arr[i][1]+arr[i][2]);
    }

}