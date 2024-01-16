//Q, write a programe that program will contain both the function maximum or minimum in one file and from thr main function call both the function and get the return value as iRet and deisplay the value   
#include<stdio.h>
#include<stdlib.h>

void Maximini (int Arr[],int iLength)
{
   int iCnt = 0;
   int iMax = Arr[0];
   int iMin = Arr[0];

   for(iCnt = 0;iCnt < iLength;iCnt ++)
   {
    if (Arr[iCnt] < iMin)
      {
         iMin = Arr[iCnt] ; 
      }
    if (Arr[iCnt] > iMax)
      {
         iMax = Arr[iCnt] ;  
      }
   }
   
   printf("maximum number is :%d\n",iMax);
   printf("minimum number is :%d\n",iMin);
} 
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of element :\n");
    scanf("%d",&iSize);

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

    Maximini(ptr,iSize);
    
    free(ptr);

    return 0;
}