/*
Animesh has N empty candy jars, numbered from 1 to N, with infinite capacity. He performs M operations. Each operation is
described by 3 integers a, b and k. Here, a and b are indices of the jars, and k is the number of candies to be added inside each
jar whose index lies between a and b (both inclusive). Can you tell the average number of candies after M operations?
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
int validation1 (int N,int M);

int main()
{
    int N,M; // declaration of variables

    printf("Enter the value of N and M : "); // taking input for N and M
    scanf("%d %d",&N,&M);
    if(validation1(N,M)==1)
    {

    int a[M],b[M],k[M]; // declaration of arrays to store values of a,b and k
    int jars[N]; // declaration of arrays jar to store number of candles

    for(int i =0; i < N; i++)
    {
        jars[i] = 0; //initializing all jars with 0
    }

    for(int i =0; i <M; i++)
    {    //taking input for a,b and k  
        printf("Enter the value of a,b and k , respectively: ");
        scanf("%d %d %d", &a[i], &b[i], &k[i]);

        if((a[i] >=1)&& (b[i] >=a[i]))
        {

        for(int j =a[i]-1; j <=b[i]-1; j++)
        {
            jars[j] = k[i] + jars[j]; 
        }
        
        }
       else
    {   //validation of input
        printf("Invalid input for a and b\n");
        i--;
    }
    }

    int sum =0;
    for(int i =0; i <N; i++)
    { //calculating total candles
        sum = sum + jars[i];
    }
    printf("%d",(sum/N));

    }
    else
    {
        printf("Invalid Input\n");
    }
    return 0;

}

int validation1 (int N, int M)
{
    if((N>=3) && N <=pow(10,7)&& (M>=1) && (M <= pow(10,5)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

