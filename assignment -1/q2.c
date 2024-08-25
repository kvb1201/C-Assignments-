//PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE
#include<stdio.h>
int main()
{
    int maths,physics,chemistry,english,computer,total;
    float percentage;
//Asking user for his marks
    printf("Enter maths marks: ");
    scanf("%d",&maths);
    printf("Enter physics marks: ");
    scanf("%d",&physics);
    printf("Enter chemistry marks: ");
    scanf("%d",&chemistry);
    printf("Enter english marks: ");
    scanf("%d",&english);
    printf("Enter computer marks: ");
    scanf("%d",&computer);
    // forumualas for total and percentage
    total = maths + physics +chemistry +english + computer;
    percentage = (total*100)/500;
    printf("%d is the total marks and %f is the percentage obtained", total, percentage);
    return 0;
}
