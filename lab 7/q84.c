/*
WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION
USING POINTER TO STRUCTURE.
*/

//informations to be taken: 
/*
1) Book Name
2) Author
3) Language
4) Genre
5) Publication

*/
//preprocessor statements
#include<stdio.h>  // including stamdard input output header file
#include<string.h> // including header file for srings

void takeInformation(char bookName[],char Author[],char Language[], char Genre[],char Publication[]); //function for taking information
void displayInformation(char bookName[],char Author[],char Language[], char Genre[],char Publication[]);//function for display information

int main()
{   
    char bookName[100], Author[100], Language[100], Genre[100], Publication[100]; //declaration of strings to store input
    takeInformation( bookName, Author, Language, Genre, Publication); // function call 
    displayInformation( bookName, Author, Language, Genre, Publication); // function call
    return 0;
    

}

void takeInformation(char bookName[],char Author[],char Language[], char Genre[],char Publication[])
{   //taking input from the user
    printf("Enter bookname:"); 
    fgets(bookName,100,stdin);
    printf("\nEnter Author: ");
    fgets(Author,100,stdin);
    printf("\nEnter Language of book: ");
    fgets(Language,100,stdin);
    printf("\nEnter genre of the book: ");
    fgets(Genre,100,stdin);
    printf("\nEnter publication of the book: ");
    fgets(Publication,100,stdin);

}

void displayInformation(char bookName[],char Author[],char Language[], char Genre[],char Publication[])
{
    printf("The book %s is written by %s author.\n It is written in %s language .\n The genre of Book is %s and it is published %s publication.",bookName,Author,Language,Genre,Publication);
    //displaying the output
}

