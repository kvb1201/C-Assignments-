//WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”.
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("LNMIITSTUDENT.DAT","a");
    fprintf(fptr,"%s","This file is on append Mode");
    fclose(fptr);
    return 0;
}