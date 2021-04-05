#include "headers.h"
#include "declerations.h"
void** DeleteNode(void **arg)
{
    printf("%s:Begin\n",__FILE__);
    int i,key,loc;
    Node **tree;
    Node *Tree;
    tree=(Node**)arg;
    printf("Enter the key to delete\n");
    scanf("%d",&key);
    i=1;
    while((*(tree+i))->rchild!=NULL)
    {
        Tree=(*(tree+i))->rchild;
        loc=i;
        i++;
    }
    i=1;
    while((*(tree+i++))->value!=key);
    (*(tree+i))->value=Tree->value;
    free((*(tree+loc))->rchild);
    printf("%s:End\n",__FILE__);
    return (void**)tree;
}