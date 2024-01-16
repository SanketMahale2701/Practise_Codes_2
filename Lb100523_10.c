//Q. Accept n number from user and you have to display the count of odd number

#include<stdio.h>
#include<stdlib.h>  

int iCnt = 0;
int iCount = 0;
int CountOddDisplay (int Arr[],int iLength)  
{
    for(iCnt = 0;iCnt < iLength;iCnt ++)
    {
       if((Arr[iCnt] % 2 ) != 0)
       {
          iCount ++;
       }
    }
    return iCount;
}

int main ()                     
{
    int iSize = 0;  
    int *ptr = NULL;               
    int iCnt = 0;
    int iRet = 0;

    printf("Enter thr number of elements \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

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
    iRet = CountOddDisplay (ptr,iSize);                    

    printf("The count of Odd number is :%d",iRet);
    free(ptr);

    return 0;
}