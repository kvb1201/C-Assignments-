/*
 (A GUESSING GAME): With this program the user has to guess a number that the program has picked as the lucky number.
  It uses one for loop and plenty of if statements. I’ve also thrown in a conditional operator, 
  just to make sure you haven’t forgotten how to use it!
*/

#include<stdio.h>
#include<time.h>
int main()
{
int input;  //declaration of a variable to take input from the user
time_t time; //variable to store time
    
    // triggering the loop to get input from the user
    while (input != -1)
    {   
             printf("Enter the number (from 0 to 9 ) which you assume to be lucky or press -1 to terminate: ");
            scanf("%d",&input);
               
               
              //evaluation of lucky number
            int luckynumber = time%10;
            time = time /10;
            
            if(input >=0 && input <=9)
            {
            if(input == luckynumber)
            {
                printf("Congratulations ! Your assumption is right and %d is the lucky number.\n",luckynumber);
            }
            else
            {
                printf("Sorry ! %d is the lucky number.\n",luckynumber);
            }
        }
        else
        {   
            if(input == -1)
           { printf("Program Terminated.");
            break;
           }

            else
            {
                printf("Invalid input\n");
            }
        }
        

        }
    
    
return 0;

}