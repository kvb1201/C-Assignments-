/* WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE
FORMULA.
CM = M/2+P/2+C/2+E
WHERE CM = Cut of f mark
M = Marks in Mathematics out of 200
P = Marks in Physics out of 200
C = Marks in Chemistry out of 200
E = Marks in entrance examination out of 100


*/

#include<stdio.h>
int main()
{
    int maths,physics,chemistry,entrance_exam; // declaration of variables
    float cutoff;
    //obtaining data from user
    printf("Enter your mathematics(out of 200), physics(out of 200), chemistry(out of 200) and entrance examination(out of 100) respectively : ");
    scanf("%d %d %d %d",&maths,&physics,&chemistry,&entrance_exam);
    // conditions for validating marks and calculating cutoff
    (maths <=200 && maths>= 0) && (physics <=200 && physics >= 0 )&& (chemistry <=200 && chemistry >= 0) && (entrance_exam <= 100 && entrance_exam >= 0)? cutoff = (maths/2) + (physics/2) +(chemistry/2) +entrance_exam: printf("Invalid input\n")  ;
    printf("Cutoff marks are %f",cutoff);//printing cutoff
    return 0;


}