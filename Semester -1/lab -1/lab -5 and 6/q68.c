//PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE THEM IN THIRD MATRIX.
#include<stdio.h>
int main()
{
    //declaration of matrix 1
    int arr1[3][3];
    //declaration of matrix 2
    int arr2[3][3];
    //declaration of matrix 3
    int arr3[3][3];
    printf("Enter data for matrix 1\n");
    //taking input from the user for matrix 1
    for(int i =0; i <3; i++)
    {
        for(int j =0; j <3; j++)
        {
            printf("Enter the number: ");
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter data for matrix 2\n");

    //taking input from the user for matrix 2
    for(int i =0; i <3; i++)
    {
        for(int j =0; j <3; j++)
        {
            printf("Enter the number: ");
            scanf("%d",&arr2[i][j]);
        }
    }

    //creating multiplication matrix
for(int i=0; i <3; i++)
{
    arr3[i][0] = arr2[0][0]*arr1[i][0] + arr2[1][0]*arr1[i][1] +arr2[2][0]*arr1[i][2];
    arr3[i][1] = arr2[0][1]*arr1[i][0] + arr2[1][1]*arr1[i][1] + arr2[2][1] * arr1[i][2];
    arr3[i][2] = arr2[0][2]*arr1[i][0] + arr2[1][2]* arr1[0][1] + arr2[2][2]*arr1[i][2];


    

}
printf("\n");
//printing array 1
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        printf("%d\t",arr1[i][j]);
    }
    printf("\n");
}
printf("\n");

//printing array 2
for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        printf("%d\t",arr2[i][j]);
    }
    printf("\n");

}

printf("\n");

//printing array 3

for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        printf("%d\t",arr3[i][j]);
    }
    printf("\n");
}
}