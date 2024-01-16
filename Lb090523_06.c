//accept number from user and we have to chack wether the number contains the digit 8 in it or not
 
#include<stdio.h>
#include<stdbool.h>

bool ChackDigits(int iNo)
{
    int iDigit = 0;
    bool bFlag = false;
    while(iNo != 0)
    {
        iDigit = iNo % 10 ;
        if(iDigit == 8)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number :");
    scanf("%d",&iValue);

    bRet = ChackDigits(iValue);

    if(bRet == true)
    {
        printf("digit 8 is present in number \n");
    }
    else
    {
        printf("digit 8 is not present in number \n");
    }
    return 0;
}