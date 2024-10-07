//WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.
#include<stdio.h>
void vowelCheck(char c); //function prototype
int main()
{
    char c;//declaration of variable to store the entered character
    //taking input from the user
    printf("Enter a character: ");
    scanf("%c",&c);
    //checking whether the entered character is an alphabet or not
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') )
    {
        vowelCheck(c); //calling vowelCheck function if the entered character is a vowel
    }
    else
    printf("Invalid Input"); //printing invalid input if any other character is entered
}

//function definition for vowelCheck function
void vowelCheck(char c)
{
    char vowels []= {'A','E','I','O','U','a', 'e', 'i', 'o','u'}; //declaration of an array to store vowels
    {  int flag = 0; //declaration of flag variable and initializing it with value 0

        //checking whether the entered character is a vowel
        for(int i =0; i <10; i ++)
        {
       
        if(c == vowels[i])
        {
            printf("Entered character is a vowel");
            flag =1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Entered character is a consonant");

    }
    }

}

