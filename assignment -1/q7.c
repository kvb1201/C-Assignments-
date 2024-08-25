//PROGRAM TO CALCULATE AREA OF A TRIANGLE.
#include<stdio.h>
int main()
{
    int base,height,area; // Declaration of variable to store base and height
    printf("Enter the value of base : ");
    scanf("%d",&base);
    printf("Enter the value of height: ");
    scanf("%d",&height);

    area = (base*height)/2;
    printf("Area of given triangle is %d",area);
    return 0;
}