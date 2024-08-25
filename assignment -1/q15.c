//15. PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION.
#include<stdio.h>

    int main()
    {
        int maths,physics,chemistry,english,gujarati;
        printf("Enter marks of maths , physics,chemistry, english and gujarati, respectively: ");
       scanf("%d",&maths);
       scanf("%d",&physics);
       scanf("%d",&chemistry);
       scanf("%d",&english);
       scanf("%d",&gujarati);

        int total_marks = maths +chemistry +physics + english +gujarati;
        (total_marks<=500 && total_marks >= 400) ? printf("You have obtained A grade") : (total_marks < 400 && total_marks >= 300 )? printf("You have obtained B grade"): (total_marks< 300 && total_marks >=200)?printf("You have obtained C grade"): (total_marks < 200 && total_marks >= 100) ? printf("You have obtained D grade") :printf("You have failed the examinations");
        return 0;

    }
