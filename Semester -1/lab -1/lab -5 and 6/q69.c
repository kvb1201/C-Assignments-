//PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.
#include<stdio.h>
int main()
{  
     //Taking input from the user
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr1[n];

    //storing data into an array
    for(int i =0; i <n; i++)
    {
        printf("Enter number: ");
        scanf("%d",&arr1[i]);
    }

    //performing linear search
    int searchElement;
    printf("Enter the element that you want to search: ");
    scanf("%d",&searchElement);

    int elementCount =0;
    for(int i =0; i <n; i++)
    {
        if(searchElement == arr1[i])
        {
            elementCount++;
            
        }
    }
  
    {
        //printing output
    printf("The entered element is present %d times\n",elementCount);
    printf("The entered element is present at the indexes\n");
    for(int i =0; i <n; i++)
    {
        if(searchElement == arr1[i])
        {
            printf("%d ",i);   
            
        }
    }
    
    }


return 0;


  
}