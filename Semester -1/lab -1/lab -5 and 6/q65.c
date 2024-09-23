// PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE
#include<stdio.h>
int main()
{
    //reading 3*3 matrix
    int arr[3][3];
    for(int i =0; i <3; i++)
    {
        for(int j =0; j<3; j++)
        {
            printf("Enter the number: ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n Matrix \n");
    //printing 3*3 matrix
    for(int i =0; i<3;i++)
    {
        for(int j =0; j<3; j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }

    //printing 3*3 matrix transpose
    printf("\nTranspose\n");
    for(int i =0; i <3; i++)
    {
        for(int j =0; j<3; j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}