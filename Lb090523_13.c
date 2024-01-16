// Accept number from user and return it reverse number as a result

#include<stdio.h>
int ReverseNumber(int iNo)
{
   int iDigit = 0;
   int Reverse = 0;

   if(iNo < 0)
   {
    iNo = -iNo;
   }

   while(iNo != 0)
   {
        iDigit = iNo % 10;
        Reverse = Reverse * 10 + iDigit ; 
        iNo = iNo / 10;
   }
   return Reverse;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = ReverseNumber(iValue);

    printf("Reverse number is : %d",iRet);
    return 0;
}