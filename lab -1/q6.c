//PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE.
#include <stdio.h>
int main()
{
    int a,b; 
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Values of a and b after swapping:\n ");
   //logic for swapping of variables (logic 1)
    // a = a+b;
    // b = a-b;
    // a = a - b;
    
    //logic 2
    a = a*b; 
    b = a/b;
    a =a/b;

    printf("%d\n",a);
    printf("%d\n",b);
 
  
    return 0;

}