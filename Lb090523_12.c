//Accept number from user and count the frequency of odd digits 

#include<stdio.h>
int CountEvenDigits(int iNo1)
{
  int iDigit = 0;
  int iCount = 0;

  if(iNo1 < 0)
  {
    iNo1 = -iNo1 ;
  }
  while(iNo1 != 0)
  {
    iDigit = iNo1 % 10 ;
    if((iDigit % 2) != 0)
    iCount ++ ;
    iNo1 = iNo1 / 10 ;
  }
  return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Frequency of odd number is %d",iRet);
    return 0;
}