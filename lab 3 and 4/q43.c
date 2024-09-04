/*
WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES
REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.
If sales<=Rs. 500, commission is 5%
If sales 500 > but <=2000, commission is Rs. 35 plus 10% above Rs. 500 
If sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000 If sales>5000, 
commission is 12.5%

*/

#include<stdio.h>
int main()
{   //declaration of variables to store comission and sales
    float comission,sales;
    //Taking input from the user
    printf("Enter sales: ");
    scanf("%f",&sales);
    //Calculation of comission based on different sales amount
    if(sales <= 500)
    {
        comission = (5*sales)/100;

    }

    if (sales > 500 && sales <= 2000 )
    {
        comission = 35 + ((sales-500)/10);
    }

    if(sales > 2000 && sales <= 5000)
    {
        comission = 186 +((sales-2000) *12)/100;
    }
    if(sales >5000)
    {
        comission = (sales*12.5)/100;
    }

    printf("Comission for the sales is %f",comission);
    return 0;


}