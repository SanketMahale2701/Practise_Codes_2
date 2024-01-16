//Program 255
// Another syntax of typedef ..

#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;  
} NODE, *PNODE, **PPNODE;
int main()
{
    PNODE Frist = NULL;
    
    return 0;
}