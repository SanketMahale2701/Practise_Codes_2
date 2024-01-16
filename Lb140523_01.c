// templet

#include<stdio.h>
#include<stdlib.h>

void Demo(int Arr[],int iLength)
{
    //logic
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter number of element :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the %d element :\n",iSize);
    for(iCnt = 0; iCnt < iSize;iCnt ++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Elements of the array are :\n",iSize);
    for(iCnt = 0; iCnt < iSize;iCnt ++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    Demo(ptr,iSize);

    free(ptr);
    
    return 0;
}