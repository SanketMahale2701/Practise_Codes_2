 //Accept number from user and chackwether that number is palindrom number or not 
// eg . input : 121 , Output : 121    121 is palondrom number 

#include<stdio.h>
#include<stdbool.h>
int ChackPalindrom(int iNo)
{
   int iDigit = 0;
   int iCopy = iNo;
   int Reverse = 0;

   while(iNo != 0)
   {
    iDigit = iNo % 10;
    Reverse = Reverse * 10 + iDigit ; 
    iNo = iNo / 10;
   }
   if(Reverse == iCopy)
   {
    return true;
   }
   else
   {
    return false;
   }
}
int main()
{
    int iValue = 0;
    bool iRet = false;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = ChackPalindrom(iValue);

    if(iRet == true)
    {
        printf("%d is palindrom number \n",iValue);
    }
    else
    {
        printf("%d is not palindrom number \n",iValue);
    }
    return 0;
}