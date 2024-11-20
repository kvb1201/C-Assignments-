/*
90) WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES
USING POINTERS.
*/

#include<stdio.h>
int main()
{
    char string[100];
    printf("Enter the string: ");
    gets(string);
    //string length including spaces
    char *t = string, *k = string,*m = string;
    while(*t != '\0')
    {  

        if(*t != ' ')
        {
            m++;
        }
        t++;
        
    }
    int length1 = t-k;
    int length2 = m-k;

    printf("%d is the string length including spaces\n",length1);
    printf("%d is the string length excluding spaces\n",length2);
    return 0;


}