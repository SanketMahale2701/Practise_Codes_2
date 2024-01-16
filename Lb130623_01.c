// Program 263

#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
   int data;
   struct Node *next;

}NODE,* PNODE,** PPNODE;

// allocate memory for new node
// Initialised the node 
// Chackwether linked list is empty or not
// if LL is empty store address of new node in frist
// otherwise store the address of new node inside next pointer of old frist node
// update frist pointer with the address of new node

void InsertFrist(PPNODE Head,int No)
{
   PNODE newn = NULL;
   newn = (PNODE)malloc(sizeof(NODE)); 

   newn -> data = No;
   newn -> next = NULL;       
   if(*Head == NULL)
   {
      *Head = newn ;
   }
   else 
   {
      newn -> next = *Head ;
      *Head = newn;
   }
}
void InsertLast(PPNODE Head,int No)
{
   PNODE newn = NULL;
   PNODE temp = *Head;
   newn = (PNODE)malloc(sizeof(NODE)); 

   newn -> data = No;
   newn -> next = NULL;       
   if(*Head == NULL)
   {
      *Head = newn ;
   }
   else 
   {
      while(temp -> next != NULL)
      {
        temp = temp -> next;
      }
      temp -> next = newn;
   }
}
void Display(PNODE Head)
{
    printf("Element of linklist are \n");
    while(Head != NULL)
    {
        printf("|%d|->",Head -> data);
        Head = Head -> next;
    }
    printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCount = 0;
    while(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }
     return iCount;
}
int main()
{
    PNODE frist = NULL;
    int iRet = 0;

    InsertLast(&frist,11);
    InsertLast(&frist,21);
    InsertLast(&frist,51);
    InsertLast(&frist,101);
    
    Display(frist);
    iRet = Count(frist);
    printf("Number of nodes are : %d\n",iRet);

    InsertFrist(&frist,10);
    InsertFrist(&frist,20);

    Display(frist);
    iRet = Count(frist);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}