// accept number user you have to count of frequency of 8 from the given number

#include<stdio.h>

int ChackCount(int iNo)
{
    int iDigit = 0;
    int Count = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10 ;
        if(iDigit == 8)
        Count ++;
        iNo = iNo / 10;
    } 
    return Count;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = ChackCount(iValue);

    printf("frequency of 8 is :%d" ,iRet);
    return 0;
}
