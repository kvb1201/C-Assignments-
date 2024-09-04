/* 24. WRITE A C PROGRAM TO FIND THE VALUE OF Y USING
1+x where n=1
1+x/n where n=2
 Y(x,n) = 1 +xn when n=3
1+nx when : n>3 or n<1
*/

#include <stdio.h>
int main ()
{
    int y,n,x; // declaration of variables

    //Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d",&n);

    //Using switch statement to get the value of y as per the value of n
    switch(n)
    {
        case 1 : y = 1+x;
        break;
        case 2 : y = 1 + x/n;
        break;
        default : y = 1 +n*x;
        break;
    }
    return 0;

}