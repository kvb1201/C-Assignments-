// PROGRAM TO READ THREE NOS. AND PRINT MAX
#include<stdio.h>
int main ()
{
    int a,b,c; // declaration of variables to obtain three numbers
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Enter the third number : ");
    scanf("%d",&c);

    if(a > b)
    {
        if(a > c)
        {
            printf("%d is the greatest number among all.",a);

        }
        else
        {
            printf("%d is the greatest number among all.",c);

        }


    }
    else
    {
        printf("%d is the greatest number among all.",b);
    }
    return 0;

}