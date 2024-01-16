//Q. Accept n number from user ane perform the addition of n numbers

#include<stdio.h>
#include<stdlib.h>  

int iCnt = 0;
int iSum = 0;
int Addition (int Arr[],int iLength)  
{
    for(iCnt = 0;iCnt < iLength;iCnt ++)
    {
       
        iSum = iSum + Arr[iCnt] ;
    }
    return iSum;
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
    iRet = Addition (ptr,iSize);                    
    
    printf("Addition id : %d",iRet);

    free(ptr);

    return 0;
}