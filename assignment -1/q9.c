//PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND.
#include<stdio.h>
int main()
{
    int hours,min,seconds,total_seconds; // variable declaration
    // taking input from user
    printf("Enter time in hours , minutes and seconds, respectively : "); 
    scanf("%d %d %d",&hours,&min,&seconds); 

    //forumulation of total seconds
    total_seconds = (hours*3600) + (min*60) + seconds;
    //printing total seconds
    printf("Total seconds is %d",total_seconds);
    return 0;

}