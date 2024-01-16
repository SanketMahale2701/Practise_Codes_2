// Accept number and digit from useryou have to find out wether that digit is ocuured how many times in your number

#include<stdio.h>

int ChackCount(int iNo , int iSearch)
{
    int iDigit = 0;
    int Count = 0;
    if ((iSearch < 0)||(iSearch > 9))
    {
        printf("Enter the digit in range 0 to 9\n");
        return 0;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10 ;
        if(iDigit == iSearch)
        Count ++;
        iNo = iNo / 10;
    } 
    return Count;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue1);

    printf("Enter the number that you want to frequency in number (o to 9) :");
    scanf("%d",&iValue2);

    iRet = ChackCount(iValue1,iValue2);

    printf("frequency of %d is :%d",iValue1,iRet);
    return 0;
}
