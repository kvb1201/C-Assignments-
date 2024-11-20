/*
95)WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.
*/

#include<stdio.h>

typedef struct employeeData 
{
    int employee_number;
    char employeeName[100];
    float basicPay;
} e;

int main()
{   e *ptr;
    e employees[50];
    printf("Enter the value of N: ");
    int N; 
    scanf("%d", &N);
    getchar();
    if(N >=1 && N <=50 )
    {   //taking input for N employees
        for(int i =0; i< N; i++)
        {
            printf("Enter employee number of employee %d: ",i+1);
            scanf("%d",&employees[i].employee_number);
            getchar();
            printf("Enter employee name: ");
            gets(employees[i].employeeName);
            printf("Enter basic pay: ");
            scanf("%f",&employees[i].basicPay);
        }
        
    //printing name and basic pay of N employees
    for(int i =0; i < N; i++)
    {
        printf("Employee Name: %s",employees[i].employeeName);
        printf("\nBasic Pay: %f\n",employees[i].basicPay);
    }
return 0;
    }
    
}