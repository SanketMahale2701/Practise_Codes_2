#include<stdio.h>
#include<stdlib.h>                           // for memory management  


// step 5: Perform the operation on the array
//void Demo (int *Arr, int iLength)
void Demo(int Arr[],int iLength)   // Funtion 
{
   // logic //
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////

int main ()                        // entry point function
{
    int iSize = 0;                 // to store size of array
    int *ptr = NULL;               //to store addess of array
    int iCnt = 0;                  // loop counter


    // Step 1: Accept the number of elements from user
    printf("Enter thr number of elements \n");
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


    // stap 4: Pass the array to the function
    Demo(ptr,iSize);                    // Demo(400,4);


    // step 6: Deallocate the memory of array
    free(ptr);

    return 0;                              // return success to Os
}