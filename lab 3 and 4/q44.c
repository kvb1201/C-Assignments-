/*
WRITE A PROGRAM IN C FOR THE FOLLOWING.
AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC
CONSUMERS AS FOLLOWS.
*/

#include<stdio.h>
int main()
{   // declaration of variables to store consumption unit and amount calculation
    float consumption,amount;
    //Taking input from the user
    printf("Enter the value of consumption: ");
    scanf("%f",&consumption);
    //Calculation of amount based on different consumptions
    if(consumption >= 0 && consumption <= 200)
    {
        amount = consumption*0.50;
    }
    if(consumption >200 && consumption <= 400)
    {
        amount = ((consumption-200) *0.65 + 100);
    }
    if(consumption > 400 && consumption <=600)
    {
        amount = ((consumption -400)*0.80)+230;
    }
    if(consumption >600)
    {
        amount = ((consumption -600)*1.25) + 425;
    }

    //printing the amount
    printf("%f is the amount to be paid by the consumer for %f units",amount,consumption);

    return 0;

}