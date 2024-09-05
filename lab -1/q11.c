//PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.
#include<stdio.h>
int main()
{
    int total_seconds;//variable declaration
    // taking data from the user
    printf("Enter total seconds : ");
    scanf("%d",&total_seconds);
    //conversion of total seconds into time
    int hours,minutes,seconds;
    hours = total_seconds/3600;
    minutes = (total_seconds - (hours *3600))/60;
    seconds = (total_seconds - (hours *3600) - (minutes * 60));
    //Printing time
    printf("Time is %d hours, %d minutes,  %d seconds.",hours,minutes,seconds);
    return 0;
}