//Q.accept n numbers from user as well as accept on another number from user and count that another numbers frequency

#include<stdio.h>
#include<stdlib.h>

int ChackNumber (int Arr[],int iLength,int iNo)
{
   int iCnt = 0;
   int iCount = 0;
   for(iCnt = 0;iCnt < iLength;iCnt++)
   {
    if(Arr[iCnt] == iNo)
    {
        iCount ++;
    }
   }
  return iCount;
} 
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    int iValue = 0;

    printf("Enter the number of element :\n");
    scanf("%d",&iSize);

    printf("Enter the number that you want to chack:\n");
    scanf("%d",&iValue);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Elements of array is :\n");
    for(iCnt = 0;iCnt < iSize;iCnt ++)
    {
        scanf("%d",&ptr[iCnt]);
    }
     printf("Enter the number of element :\n");
    for(iCnt = 0;iCnt < iSize;iCnt ++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = ChackNumber(ptr,iSize,iValue);

    printf("Frequency of %d is: %d\n",iValue,iRet);
    
    free(ptr);

    return 0;
}