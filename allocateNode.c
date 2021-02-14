#include "headers.h"
#include "declerations.h"
Node *NewNode;
void** allocateNode(void **arg)
{
    printf("%s:Begin\n",__FILE__);
    NewNode=(Node*)malloc(sizeof(Node));
    if(!NewNode)
    {
        perror("malloc");
        (*fptr[0])((void**)&status[1]);
    }
    NewNode->index=0;
    NewNode->parent=NULL;
    NewNode->lchild=NULL;
    NewNode->rchild=NULL;
    NewNode->status=0;
    NewNode->value=val++;
    printf("%s:End\n",__FILE__);
    return (void**)&NewNode;
}