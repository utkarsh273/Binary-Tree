#include "headers.h"
#include "declerations.h"
void** InsertNode(void **arg)
{
    Node **tree;
    Node *curr;
    
    printf("%s:Begin\n",__FILE__);
    tree=(Node**)arg;
    if(!tree)
    {
        printf("Tree not found\n");
        return arg;
    }
    curr=*(tree);
    while(curr!=NULL)
    {
        curr= curr+1;
    }
    tree=(Node**)realloc(tree,sizeof(Node*)*3);
    if(!tree)
    {
        perror("realloc");
        (*fptr[0])((void**)&status[1]);
    }
    curr=curr+1;
    *(tree+1)=*(Node**)(*fptr[7])(arg);//allocateNode
    *(tree+2)=NULL;
    printf("%s:End\n",__FILE__);
    return (void**)tree;
}