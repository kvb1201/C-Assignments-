//PROGRAM TO READ A 3*3 MATRIX AND SUBTRACT THEIR VALUE AND STORE THEM IN THIRD MATRIX.
#include<stdio.h>
int main()
{
    int arr1[3][3]; //declaration of matrix 1
    int arr2[3][3];//declaration of matrix 2

    //Taking input for matrix 1
    printf("Enter the data for matrix 1\n");
    for(int i =0; i <3; i++)
    {
        for(int j =0; j <3; j++)
        {
            printf("Enter the number: ");
            scanf("%d",&arr1[i][j]);
        }
    } 
    
   //Taking input for matrix 2
    printf("Enter the data for matrix 2\n");
    for(int i =0; i <3; i++)
    {
        for(int j =0; j <3; j++)
        {
            printf("Enter the number: ");
            scanf("%d",&arr2[i][j]);
        }
    }
    //printing matrix 1
        //Taking input for matrix 1
 
    for(int i =0; i <3; i++)
    {
        for(int j =0; j <3; j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

//printing matrix 2

    for(int i =0; i <3; i++)
    {
        for(int j =0; j <3; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //storing their sum in 3rd matrix
    int arr3[3][3];
    for(int i =0; i <3; i++)
    {
        for(int j=0; j <3; j++)
        {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    //printing matrix 3

    for(int i =0; i <3; i++)
    {
        for (int j=0; j <3; j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }

    


}