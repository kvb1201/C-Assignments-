// Program to check whether a number is prime or not

#include<stdio.h>
int checkprime(int n);
int main()
{ int flag,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    if (n ==1)
    {
        printf("1 is neither composite nor prime.");

    }
    if(n == 2)
    {
        printf("Entered number is a prime.");
    }
    flag = checkprime(n);

    if(n != 1 && n != 2)
    {
        if(flag == 0)
        {
            printf("Entered number is not prime.");
        }
        if(flag == 1)
        {
            printf("Entered number is prime.");
        }
    }
    return 0;

}
int checkprime(int n)
{ int flag;
    for(int i =2; i <n; i++)
    {
        if (n%i == 0)
        {
            flag = 0;
            break;
        }
        if(n%i != 0)
        {
            flag = 1;
        }
    }
    return flag;
}
