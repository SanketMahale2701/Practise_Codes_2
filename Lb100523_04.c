#include<stdio.h>
#include<stdlib.h>   // for memory management  
int main ()    // entry point function
{
    int iSize = 0;   // to store size of array
    int *ptr = NULL;  //to store addess of array
    int iCnt = 0;   // loop counter

    // Step 1: Accept the number of elements from user
    printf("Enter the number of elements \n");
    scanf("%d",&iSize);

    // step 2: Allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    // step 3 : accept the values from user
    printf("Enter the element \n"); 
    for(iCnt = 0;iCnt < iSize;iCnt ++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Element of Array are \n");
    for(iCnt = 0;iCnt < iSize;iCnt ++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    return 0;       // return success to Os
}