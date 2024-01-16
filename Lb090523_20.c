// Accept number from user and return thr largest digit from that number


#include<stdio.h>

int ChacklargeDigit(int iNo)
{
   int iDigit = 0;
   int imaximum = 0;

   if( iNo < 0)
   {
    iNo = -iNo ;
   }
   while(iNo != 0)
   {
    iDigit = iNo % 10;
    if(iDigit > imaximum)
    {
        imaximum = iDigit;
    }
    if(imaximum == 9)
    {
        break;
    }
    iNo = iNo / 10;
   }
   return imaximum ;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = ChacklargeDigit(iValue);

    printf("small digit is %d",iRet);

    return 0;
}