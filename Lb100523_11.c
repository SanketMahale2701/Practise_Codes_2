//Q. Accept n number from user and return its average

#include<stdio.h>
#include<stdlib.h>

float CalculateAvg(int Arr[],int iLength)
{
    int iCnt = 0;
    float Avg = 0;
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
       Avg = Avg + Arr[iCnt];
    }
     return ((float)Avg/(float)iLength);
}
int main ()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0; 

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize); 
    
    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements :\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    printf("Elements of Array are :\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    fRet = CalculateAvg(ptr,iSize);

    printf("Average of Array is : %f \n",fRet);
   
    free(ptr);

    return 0;
}