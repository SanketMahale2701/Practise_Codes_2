// Accept number from user and return thr samllest digit from that number


#include<stdio.h>

int ChackSmallDigit(int iNo)
{
   int iDigit = 0;
   int iminimum = 9;

   if( iNo < 0)
   {
    iNo = -iNo ;
   }
   while(iNo != 0)
   {
    iDigit = iNo % 10;
    if(iDigit < iminimum)
    {
        iminimum = iDigit;
    }
    if(iminimum == 0)
    {
        break;
    }
    iNo = iNo / 10;
   }
   return iminimum ;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = ChackSmallDigit(iValue);

    printf("small digit is %d",iRet);

    return 0;
}