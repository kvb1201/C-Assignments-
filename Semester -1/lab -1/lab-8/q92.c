/*
92).WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.
*/

#include<stdio.h>
int main()
{   //given list of numbers
    int N = 5;
    int arr[] = {1, 5 , 18, 3, 10};
    //maximum code logic
    int max = *arr;
    for(int i =0;i < N; i++)
    {
        if(max < *(arr+i))
        max = *(arr+i);
    }

    printf("%d is the maximum ",max);
    return 0;
}