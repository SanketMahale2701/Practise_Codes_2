//Accept number form thr user and accept digit from the the user and chackwether that digit is present in the number or not
 
#include<stdio.h>
#include<stdbool.h>

bool ChackDigits(int iNo,int iSearch)
{
    int iDigit = 0;
    bool bFlag = false;

    if ((iSearch < 0)||(iSearch > 9))
    {
        printf("Enter the digit in range 0 to 9\n");
        return false;
    }
    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10 ;
        if(iDigit == iSearch)
        {
            bFlag = true;
            break;
        }
        iNo = iNo / 10;
    } 
    
     return bFlag;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Enter the number :");
    scanf("%d",&iValue1);

    printf("Enter the number that you want to chack(0 to 9) :");
    scanf("%d",&iValue2);

    bRet = ChackDigits(iValue1,iValue2);

    if(bRet == true)
    {
        printf("%d is present in %d",iValue2,iValue1);
    }
    else
    {
        printf("%d is not present in %d",iValue2,iValue1);
    }
    return 0;
}