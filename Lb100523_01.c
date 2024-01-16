#include<stdio.h>
#include<stdlib.h>
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    

   // Step-1: Accept the number of element from user
    printf("Enter the number of elements \n");
    scanf("%d",&iSize);

    // Step-2: Allocate the memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("unable to allocate memory  \n");
        return -1;
    }
    else
    {
        printf("Memory allocate successfully \n");
    }
    
    return 0;
}