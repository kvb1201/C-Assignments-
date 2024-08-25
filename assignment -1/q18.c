// PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) OPERATOR.
#include<stdio.h>
int main()
{
    // declaration of variables
    int a,b,c;
    // obtaining data from the user
    printf("Enter number 1: ");
    scanf("%d",&a);

    printf("Enter number 2: ");
    scanf("%d",&b);

    printf("Enter number 3 : ");
    scanf("%d",&c);

    //code for printing max
    (a>b && a>c )?printf("%d is the greatest number.",a): (b>a && b>c )? printf("%d is the greatest number.",b) : printf("%d is the greatest number.",c);
    return 0;


}