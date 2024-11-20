//94).WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING
//POINTERS.

#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter the string: ");//taking input for the string
    char string1[100];
    char string2[100];

    gets(string1);

    int len = strlen(string1);
    //code logic for copying the reversed string
    for(int i=0; i < len; i++ )
    {
        *(string2+i) = *(string1 + len -1 -i);
    }

    puts(string2);
    return 0;


}