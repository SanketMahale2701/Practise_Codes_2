
#include<stdio.h>

int main()
{
    int Arr[5];  
    int iCnt = 0;

    printf("Enter the elements :\n");
    for(iCnt = 0 ; iCnt < 5 ; iCnt ++)
    {
        scanf("%d",&Arr[iCnt]);
    }
     printf("Elements of array are: \n");
     for(iCnt = 0 ; iCnt < 5 ; iCnt ++)              // printf("%d\n",Arr[0]);
     {                                               // printf("%d\n",Arr[1]);
        printf("%d\n",Arr[iCnt]);                    // printf("%d\n",Arr[2]);
     }                                               // printf("%d\n",Arr[3]);
                                                     //printf("%d\n",Arr[4]);
    return 0;
}