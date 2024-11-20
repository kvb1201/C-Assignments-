//WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC MEMORY ALLOCATION
#include<stdio.h>
#include<stdlib.h>
void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}
int main()
{ 
    //taking input for matrix 1
    int rows1,cols1,sum;
    printf("Enter rows of matrix 1: ");
    scanf("%d",&rows1);
    printf("Enter columns of matrix 1: ");
    scanf("%d",&cols1);

    //taking input for matrix 2
    int rows2, cols2;
    printf("Enter rows of matrix 2: ");
    scanf("%d",&rows2);
    printf("Enter columns of matrix 2: ");
    scanf("%d",&cols2);

    //checking whether the multiplication is possible

    if(cols1 != rows2)
    {
        printf("Matrix multiplication is not possible");
    }

    else
    {
        //declaration of matrices using pointers

        //allocation of memory to array 1
        int **matrix1 = (int**) malloc(rows1 * sizeof(int));
        {
            for(int i =0; i < rows1; i++)
            {
                matrix1[i] = (int *) malloc(cols1 * sizeof(int));
            }
        }
        int **matrix2 = (int **) malloc(rows2 * sizeof(int));
        for(int i =0; i < rows2; i++)
        {
            matrix2[i] = (int *) malloc(rows1 * sizeof(int));
        }

        //taking input for matrix 1
        printf("\n Enter the input for matrix 1: ");
        for(int i =0; i <rows1; i++)
        {
            for(int j =0; j < cols1; j++)
            {
                scanf("%d",&matrix1[i][j]);
            }
            
        }
        //taking input for matrix 2
        printf("\n Enter the input for matrix 2: ");
        for(int i =0; i <rows2; i++)
        {
            for(int j =0; j < cols2; j++)
            {
                scanf("%d",&matrix2[i][j]);
            }
            
        }

        //resultant matrix

        //allocating memory to resultant matrix
       int **result = (int **) malloc(rows1 * sizeof(int));
       for(int i =0; i < cols2; i++)
       {
        result[i] = (int *) malloc(cols2 * sizeof(int));
       }
    //multiplication of matrix

    for(int i =0; i <rows1; i++)
    {
        for(int j =0; j <cols2; j++)
        {            sum =0;
            for(int k =0; k < rows2; k++)
            {
                sum = sum + matrix1[i][k]*matrix2[k][j];
            }
            result[i][j] = sum;

        }
    }
    //printing the resultant matrix

    for(int i =0; i < rows1; i++)
    {
        for(int j =0; j < cols2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    // free result matrix
    freeMatrix(result,rows1);
    //free matrix 1 & matrix 2;
    freeMatrix(matrix1,rows1);
    freeMatrix(matrix2,rows2);


    return 0;    
    }
    
}
