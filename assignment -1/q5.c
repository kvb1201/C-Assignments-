//PROGRAM TO SWAP TWO VARIABLES USING THIRD VARIABLE.
#include<stdio.h>
int main ()
{

    int a,b,c;// declaration of three variables
    //obtaining value of 2 variables
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b); 
    //mechanism for swapping of variables
    c = b;
    b =a;
    a = c;
    printf("Value of a is %d after swapping and b is %d after swapping",a,b);
    return 0;

}