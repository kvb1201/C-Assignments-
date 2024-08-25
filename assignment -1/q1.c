//program to calculate simple interest
#include<stdio.h>
int main()
{
    int simpleInterest,p,r,t;   //Declaration of variables for interest,principal , rate and interest
    printf("Enter the value of Principal, rate and interest, respectively: \n");// asking user for info
    scanf("%d %d %d",&p,&r,&t);// taking input from user using scanf function
    simpleInterest = (p*r*t)/100;//formula of simple interest
    printf("%d",simpleInterest);
    return 0;
    
}