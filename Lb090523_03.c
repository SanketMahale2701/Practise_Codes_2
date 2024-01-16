// Accept the digits from user and print that digit saparate saparate on screen using for loop better veriation
// eg. input : 236     output : 6    3    2
#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;
    for(;iNo != 0;iNo = iNo / 10)   //       <-------
    {
        iDigit = iNo % 10 ;
        printf("%d\t",iDigit);
    } 
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    DisplayDigits(iValue);
    return 0;
}
