//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.
#include<stdio.h>
#include<math.h>
int countDigits(int n);
int armstrong(int n);
void armstrongcheck(int n);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    armstrongcheck(n);


}


int countDigits(int n)
{
    int count =0;
    while (n != 0)
    {
        n = n/10;
        count ++;
    }
    return count;
}

int armstrong(int n)
{
    int sum =0;
   int power = countDigits(n);

    while(n != 0)
    {
        int digit = n%10;
        sum = sum +pow(digit,power);
        n = n/10;
    }
    return sum;
}

void armstrongcheck(int n)
{
    if(n == armstrong(n))
  
    {printf("Entered number is an armstrong numeber");
    }
    else
    {
    printf("Entered number is not an armstrong number");
    }

}
