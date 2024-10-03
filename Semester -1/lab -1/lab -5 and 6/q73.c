/*
 An election is contested by 5 candidates. The candidate is numbered are 1 to 5
and the voting is done by marking the candidate number on the ballot paper.
Write a program to read the ballots and count the votes cast for each candidate
using an array variable count. In case, a number, read is outside the range 1 to 5,
the ballot should be considered as a ‘spoilt ballot’ and the program should also
count the number of spoilt ballots.
*/
#include<stdio.h>
int main()
{
    int candidateVotes[5];  //declaration of array to store the votes
    int countSpoiltBallots = 0; //declaration of variable for counting spolt ballots
    //initializing all array elements with value 0
    for(int i =0; i<5; i++)
    {
        candidateVotes[i] = 0;
    }
    //storing candidate votes
    for(int i =0; ;)
    {  //taking input from the user
         int n;
        printf("Enter the candidate number who you want to vote or press 0 to end the program: ");
        scanf("%d",&n);
        //exit condition
        if(n == 0)
        break;
        //counting candidate votes
        if(n >=1 && n <=5)
        {
        candidateVotes[n-1]++;
        }
        //counting spoilt ballots
        if(n >5)
        {
            countSpoiltBallots++;
        }
    }

    //printing votes
    printf("The votes of all candidates are listed below: \n");

    for(int i =0; i <5; i++)
    {
        printf("The candidate %d has won %d votes\n",i+1,candidateVotes[i]); //printing votes of all candidates
    }
            printf("%d number of spoilt ballots",countSpoiltBallots); //printing spoilt ballots

return 0;
}