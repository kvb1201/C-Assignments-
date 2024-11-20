/*You are given an integer, N . Write a program to determine if N is an element of the F i b o n a c c i S e q u e n c e .
The first few elements of fibonacci sequence are 0,1,1,2,3,5,8,13.... A fibonacci sequence is one where every element is a sum
of the previous two elements in the sequence. The first two elements are 0 and 1.
*/


#include<stdio.h>
#include<math.h>
int isfibonacci(int n);
int main()
{
    int T;
    printf("Enter the value of T: ");
    scanf("%d",&T);
    if(T >=1 && T <=pow(10,5))
    {

    int N[T];
    //taking input for N
    for(int i =0; i < T; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&N[i]);
        if(N[i]>pow(10,10) || N[i]< 1)
        {
            printf("Invalid Input\n");
            return 0;
        }
    }

for(int i =0; i < T; i++)
{
    int t = isfibonacci(N[i]);
    if(t == 0)
    {
        printf("IsNotFibo\n");
    }
    if(t == 1 )
    {
        printf("IsFibo\n");
    }
}
    }
    else
    {
        printf("Invalid input \n");
    } 

}


int isfibonacci(int N)
{
    if(N ==0)
    return 1;
    if(N ==1)
    return 1;

    int t1=0,t2=1,next_term =1;
    while(next_term < N)
    {
        next_term = t1 +t2;
        t1 = t2;
        t2 = next_term;
    }
    if(next_term == N)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}