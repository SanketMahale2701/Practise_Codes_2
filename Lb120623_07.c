// Program 260

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;  
};

typedef struct Node NODE;
typedef struct Node * PNODE;   // single star
typedef struct Node ** PPNODE;  // double stra

void InsertAtPos(PPNODE Head, int No)
{
    
}
void DeleteFrist(PPNODE Head)
{

}
void DeleteLast(PPNODE Head)
{
    
}
void DeleteAtPos(PPNODE Head, int iPos)
{
    
}
void InsertFrist(PPNODE Head, int No)
{
    PNODE newn = NULL;

    // Dynamic memory allocation
    newn = (PNODE)malloc(sizeof(NODE));
    
    // Initialise the node    
    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL)    // Lisklist is empty
    {
       *Head = newn ;
    }
    else
    {
       newn -> next = *Head;
       *Head = newn ;
    }
}
void InsertLast(PPNODE Head, int No, int iPos)
{
   
    PNODE newn = NULL;

    // Dynamic memory allocation
    newn = (PNODE)malloc(sizeof(NODE));
    
    // Initialise the node    
    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL)    // Lisklist is empty
    {
       *Head = newn ;
    }
    else
    {

    }    
}
void Display(PNODE Head)
{
    printf("Elements of Linkedlist is : \n");
    while(Head != NULL)
    {
       printf("|%d| ->\t",Head -> data);
       Head = Head -> next;
    }
    printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCount = 0;
    while(Head != NULL)
    {
       iCount ++;
       Head = Head -> next;
    }
    return iCount;
}

int main()
{
    PNODE Frist = NULL;
    int iRet = 0;
    
    InsertFrist(&Frist,111);  // InsertFirst(60,111);
    InsertFrist(&Frist,51);  // InsertFirst(60,51);
    InsertFrist(&Frist,21);  // InsertFirst(60,21);
    InsertFrist(&Frist,11);  // InsertFirst(60,11);

    Display(Frist);

    iRet =Count(Frist);
    printf("Number of nodes are : %d ",iRet);
    
    return 0;
}