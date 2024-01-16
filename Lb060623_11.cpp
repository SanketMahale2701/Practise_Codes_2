//Accept one number from user and accept position from the user and off the position bit of the number 
// Program 252
// Program 245

#include<iostream>
using namespace std ;
typedef unsigned int UINT;
UINT Offbit( UINT iNo,UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;
    
    iMask = ~iMask;

    iResult = iNo & iMask ;
    
    return iResult ;
}
int main()
{
    UINT iValue1 = 0;
    UINT iBit = 0;
    UINT iRet = 0;

    cout<<"Enter the number"<<"\n";
    cin>>iValue1;

     cout<<"Enter the Position"<<"\n";
    cin>>iBit;

    iRet = Offbit(iValue1,iBit);

    cout<<"Result is : "<<iRet<<"\n";
    
    return 0;
}