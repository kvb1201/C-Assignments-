//PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES.
#include <stdio.h>
int main()
{
    float f,c;// declaration of variables for temperature in fahrenheit and celcius
    printf("Enter the value of temperature in fahrenheit: ");
    scanf("%f",&f);

    c = (f-32)*5/9; // forumula for temperature conversion
    printf("Temperature in celcius is %f",c);
    return 0;
}