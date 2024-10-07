//WRITE A FUNCTION TO READ LINE OF TEXT AND FIND OUT LENGTH OF STRING.
#include<stdio.h> //preprocessor statement
int lengthOfString(char arr[]); //function to calculate length of string
int main()
{
    char inputLine[100] ; // declaration of string to store input line
    //taking input from the user
    printf("Enter your statement: "); 
    fgets(inputLine,100,stdin);
    int length = lengthOfString(inputLine); //function call and storing the value of string in length variable
    printf("%d is the length of string",length); //printing the length of string


}

//function for calculating length of string
int lengthOfString(char arr[])
{
    int i =0;
    while(arr[i] != '\0')
    {
        i++;
    }
    return i-1;
}
