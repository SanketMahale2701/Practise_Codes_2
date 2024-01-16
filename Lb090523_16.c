//Accept number from user and and calculate the average of digits
// eg. input : 234 output : 3      2+3+4 = 9/3 =3

#include<stdio.h>

float DigitsAvg(int iNo)
{
   int iDigit = 0;
   int iSum = 0;
   int iCount = 0;

   while(iNo != 0)
   {
    iDigit = iNo % 10;
    iSum = iSum + iDigit;
    iCount ++; 
    iNo = iNo / 10;
   }
   return ((float)iSum/(float)iCount) ;
}
int main()
{
    int iValue = 0;
    float iRet = 0.0f;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = DigitsAvg(iValue);

    printf("Average is %f",iRet);

    return 0;
}