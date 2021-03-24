#include "headers.h"
#include "declerations.h"
void** InsertNode(void **arg)
{
    Node **tree;
    Node *curr,*last;
    printf("%s:Begin\n",__FILE__);
    tree=(Node**)arg;
    if(!tree)
    {
        printf("Tree not found\n");
        return arg;
    }
    count++;
    if(count>=allocsize)
    {
        tree=(Node**)realloc(tree,sizeof(Node*)*((2*count)+2));
        if(!tree)
        {
            perror("realloc");
            (*fptr[0])((void**)&status[1]);
        }
        allocsize=((2*count)+2);
    }
    (*fptr[7])(arg);//allocateNode
    *(tree+count)=*tree;
    printf("%s:value: %d\n",__func__,(*(tree+count))->value);
    if(!*(tree+2*count) && (*(tree+count))->lchild==NULL)
    {
        (*fptr[7])(arg);
        *(tree+2*count)=*tree;
        (*(tree+count))->lchild=*(tree+2*count);
        printf("Count:%d\n",count);
        printf("%s:value of left child: %d\n",__func__,(*(tree+2*count))->value);
    }
    if(!*(tree+(2*count+1)) && (*(tree+count))->rchild==NULL)
    {
        (*fptr[7])(arg);
        *(tree+(2*count+1))=*tree;
        (*(tree+count))->rchild=*(tree+(2*count+1));
        printf("Count:%d\n",count);
        printf("%s:value at right child: %d\n",__func__,(*(tree+(2*count+1)))->value);
    }
    printf("%s:End\n",__FILE__);
    return arg;
}
/* curr=*(tree);
    while(curr!=NULL)
    {
        curr= curr+1;
    } */
        /* n=0;
    if(!*(tree+1))
    {
        (*fptr[8])(arg);
    }
    else
    {
        last=curr=*(tree+1);
        while(last!=NULL)
        {
            n++;
            curr=last;
            last+=1;
        }
        if(!*(tree+(2*n))&& !(curr->lchild))
        {
            last=*(Node**)(*fptr[7])(arg);//allocateNode
        }
    } */