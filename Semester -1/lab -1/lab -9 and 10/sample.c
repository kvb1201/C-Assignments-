#include <stdio.h>
#include <string.h>

int main()
{
    char string[100] ;
    printf("Enter the string: ");
    gets(string);
    int n = strlen(string);
    char copy_string[100];

    for (int i = 0; i < n; i++)
    {
        *(copy_string +i) = *(string + n - i - 1);
    }
    // *(copy_string +n) = '\0';
    puts(copy_string);
    
    return 0;
}