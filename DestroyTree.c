#include "headers.h"
#include "declerations.h"
void** DestroyTree(void **arg)
{
    printf("%s:Begin\n",__FILE__);
    Node **tree;
    tree=(Node**)arg;
    for(int i=0;i<idx;i++)
    {
        *(tree+i)=NULL;
    }
    free(tree);
    tree=NULL;
    count=idx=n=1;
    allocsize=0;
    val=101;
    printf("Tree Destroyed sucessfully\n");
    printf("%s:End\n",__FILE__);
    return (void**)tree;
}