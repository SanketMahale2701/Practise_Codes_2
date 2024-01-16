// Q. Accept n number from thr user and we have to findout the largest element from the n number 

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
   int iCnt = 0;
   int iMax = Arr[0];
   for(iCnt = 0;iCnt < iLength;iCnt ++)
   {if (Arr[iCnt] > iMax)
      {
         iMax = Arr[iCnt] ; 
      }
   }
   return iMax ;
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
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
    
    iRet = Maximum(ptr,iSize);

    printf("Maximum number is :%d\n",iRet);

    free(ptr);
    
    return 0;
}