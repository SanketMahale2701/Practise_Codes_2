//Q.accept n numbers from user as well as accept on another number from user and chack wether that another number is present in n numbers or not 

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool ChackNumber (int Arr[],int iLength,int iNo)
{
   int iCnt = 0;
   int iFlag = false;
   for(iCnt = 0;iCnt < iLength;iCnt++)
   {
    if(Arr[iCnt] == iNo)
    {
        iFlag = true;
        break ;
    }
   }
  return iFlag;
} 
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    bool bRet = false;
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

    bRet = ChackNumber(ptr,iSize,iValue);

    if(bRet == true)
    {
        printf("%d is present in the array \n",iValue);
    }
    else
    {
        printf("%d is not present in the array \n",iValue);
    }
    
    free(ptr);

    return 0;
}