//Q.accept n numbers from user as well as accept on another number from user and chack the frist index of another number

#include<stdio.h>
#include<stdlib.h>

int Fristoccurrence (int Arr[],int iLength,int iNo)
{
   int iCnt = 0;
   for(iCnt = 0;iCnt < iLength;iCnt++)
   {
    if(Arr[iCnt] == iNo)
    {
       break;
    }
   }
  if (iCnt == iLength)
  {
    return -1;
  }
  else
  {
    return iCnt;
  }
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

    iRet = Fristoccurrence(ptr,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such element \n");
    }
    else
    {
        printf("%d occurred at index %d \n",iValue,iRet);
    }
    
    free(ptr);

    return 0;
}