#include "headers.h"
#include "declerations.h"
void** DeleteNode(void **arg)
{
    printf("%s:Begin\n",__FILE__);
    int i,key,loc,lockey;
    Node **tree;
    Node *Tree;
    tree=(Node**)arg;
    printf("Enter the key to delete\n");
    scanf("%d",&key);
//-----------------------Finding deepest RightMost node-----------------------------------------//
    i=1;
    while((*(tree+i))->rchild!=NULL)
    {
        Tree=(*(tree+i))->rchild;
        loc=i;
        i++;
    }
//---------------------------------------------------------------------------------------------//
//-------------------Finding Node that we want to Delete---------------------------------------//
    i=1;
    while((*(tree+i))->value!=key)
    {
        lockey=i;
        i++;
    }
    (*(tree+lockey+1))->value=Tree->value;//since the location we got is one index before hte node that we want to delete so lockey+1 is used
    free((*(tree+loc))->rchild);//deallocating RightMost Node 
    (*(tree+loc))->rchild=NULL;//Deleting the RightMost Node
    printf("new lchild of %d :%d and Rchild:%d\n",(*(tree+lockey+1))->parent->value,(*(tree+lockey+1))->parent->lchild->value,(*(tree+lockey+1))->parent->rchild->value);
    printf("%s:End\n",__FILE__);
    return (void**)tree;
}