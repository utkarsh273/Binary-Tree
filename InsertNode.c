#include "headers.h"
#include "declerations.h"
void** InsertNode(void **arg)
{
    Node **tree;
    Node *cur;
    tree=(Node**)arg;
    printf("%s:Begin\n",__FILE__);
    while(*tree!=NULL)
    {
        cur=*tree;
    }
    tree=(Node**)realloc(tree,sizeof(Node*)*3);
    if(!tree)
    {
        perror("realloc");
        (*fptr[0])((void**)&status[1]);
    }
    *(tree+1)=*(Node**)(*fptr[7])(arg);//allocateNode
    *(tree+2)=NULL;
    printf("%s:End\n",__FILE__);
    return (void**)tree;
}