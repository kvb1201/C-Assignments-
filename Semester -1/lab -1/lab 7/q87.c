/*
WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING
ARRAY OF STRUCTURE INTO FUNCTION).
*/

#include<stdio.h> //prepocessor statement
void passedStudents(int arr[]); //function prototype

int main()
{
    int students[10]; //declaration of array to store student's marks
    //storing data in array
    for(int i =0; i <10; i++)
    {
        printf("Enter marks: ");
        scanf("%d",&students[i]);
    }
    passedStudents(students); // function call
}

void passedStudents(int arr[]) //function definition
{
    for(int i =0; i <10; i++) 
    {
        if(arr[i] > 500)
        {
            printf("Student with roll no. %d has passed the examinations with %d marks\n ",i,arr[i]);
        }
    }
}

