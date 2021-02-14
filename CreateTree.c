#include "headers.h"
#include "declerations.h"
void** CreateTree(void **arg)
{
    Node **tree;
    printf("%s:Begin\n",__FILE__);
    tree=(void**)arg;
    tree=(Node**)malloc(sizeof(Node*));
    if(!tree)
    {
        perror("malloc");
        (*fptr[0])((void**)&status[1]);
    }
    *tree=NULL;
    printf("%s:End\n",__FILE__);
    return (void**)tree;
}