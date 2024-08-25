//PROGRAM TO CALCULATE GROSS SALARY
#include<stdio.h>
int main()
{
    int ta,da,basic,gross_salary; //declaration of variables 
    //asking user for ta,fa and basic
    printf("Enter your Travelling alllowance: ");
    scanf("%d",&ta);
    printf("Enter your Dearness Allowance: ");
    scanf("%d",&da);
    printf("Enter your basic salary: ");
    scanf("%d",&basic);
    //formula for gross salary
    gross_salary = ta + da + basic;
    printf("Your gross salary is %d",gross_salary);//printing gross salary
    return 0;

}