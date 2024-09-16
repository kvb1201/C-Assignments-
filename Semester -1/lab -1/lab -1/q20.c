// PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE.
#include<stdio.h>
int main()
{
    float a,b; // declaration of variables
    int i;
    printf("Enter number 1  : ");
    scanf("%f",&a);

    printf("Enter number 2 : ");
    scanf("%f",&b);

    printf("Choose '1' for addition \n");
    printf("Choose '2' for subtration \n");
    printf("Choose '3' for multiplication \n");
    printf("Choose '4' for division\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1 : printf("%f",a+b);
        break;

        case 2 : printf("%f", a-b);
        break;

        case 3: printf("%f", a*b);
        break;

        case 4: printf("%f", a/b);
        break;

        default : printf("Invalid Input");
        break;
    }

    return 0;
}