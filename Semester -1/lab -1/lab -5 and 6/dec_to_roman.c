//conversion of decimal number to roman number
#include<stdio.h>
int countdigit(int decimal);
void convertRoman(int decimal);
void unitdigit(int decimal);
void tensdigit(int decimal);
void hundredsdigit(int decimal);
void printThousands(int decimal);
int main()
{
    int decimal;
   //taking input from the user
    printf("Enter the number: ");
    scanf("%d",&decimal);

    convertRoman(decimal);        

return 0;




}


int countdigit(int decimal)
{
    int count =0;
    while (decimal != 0)
    {
        decimal= decimal/10;
        count++;
    }
    return count;
    
}

void unitdigit(int decimal)
{
    int unit = decimal%10;
    if( unit >=1 && unit <=3)
    {
        for(int i =1; i <= unit; i++)
        {
            printf("I");
        }
    }

    if(unit == 4)
    {
        printf("IV");
    }

    if( unit >=5 && unit <9)
    {
        printf("V");
        for(int i =5; i < unit; i++)
        {
            printf("I");
        }
    }
    if(unit == 9)
    printf("IX");

}

void tensdigit(int decimal)
{
    int num = decimal/10;
    int unit = num %10;

    if(unit >=1 && unit <=3)
  {  for(int i =1; i <= unit; i++)
    {
        printf("X");
    }
  }

  if(unit == 4)
  printf("XL");

  if(unit >=5 && unit <9)
  {
    printf("L");
    for(int i =5; i <unit ; i++)
    {
        printf("X");
    }
  }
  if(unit == 9)
  {
    printf("XC");
  }
}

void hundredsdigit(int decimal)
{
   int num = decimal/100;
   int unit = num%10;
   if(unit >=1 && unit <=3)
   {
    for(int i =1; i <=unit ; i++)
    {
        printf("C");
    }
   }
   if(unit == 4)
   printf("CD");

   if(unit >=5 && unit <9)
   {
    printf("D");
    for(int i =5; i <unit; i++)
    {
        printf("C");
    }
   }
   if(unit ==9)
   {
    printf("CM");
   }

}

void printThousands(int decimal)
{
    int num = decimal/1000;
    for(int i =1; i <= num; i++ )
    {
        printf("M");
    }
}




void convertRoman(int decimal)
{  int digits = countdigit(decimal);
    if (digits == 1)
    {
     unitdigit(decimal);   
    }

    if(digits ==2)
    {   
        tensdigit(decimal);
        unitdigit(decimal);
    }

    if(digits == 3)
    {
        hundredsdigit(decimal);
        tensdigit(decimal);
        unitdigit(decimal);


    }
    if(digits >= 4)
    {
        printThousands(decimal);
        hundredsdigit(decimal);
        tensdigit(decimal);
        unitdigit(decimal);

    }
}

