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
    if(idx>=allocsize)
    {
        tree=(Node**)realloc(tree,sizeof(Node*)*((2*idx)+2));
        if(!tree)
        {
            perror("realloc");
            (*fptr[0])((void**)&status[1]);
        }
        allocsize=((2*idx)+2);
    }
    if(n==1)
    {
        (*fptr[8])((void**)tree);//allocateNode
        *(tree+count)=*tree;
        printf("%s:value: %d\n",__func__,(*(tree+count))->value);
        printf("Count:%d\n",count);
        n++;
        idx++;
    }
    else
    {
        //printf("%s:address of left child: %p\n",__func__,(*(tree+2*count)));
        //if(!(*(tree+2*count))&& (*(tree+count))->lchild==NULL)
        if((*(tree+count))->lchild==NULL)
        {
            (*fptr[8])((void**)tree);
            *(tree+2*count)=*tree;
            (*(tree+count))->lchild=*(tree+2*count);
            (*(tree+2*count))->parent=*(tree+count);
            printf("Count:%d\n",count);
            printf("%s:value at left child of %d : %d\n",__func__,(*(tree+count))->value,(*(tree+2*count))->value);
            idx++;
        }
        //else if(!(*(tree+(2*count+1))) && (*(tree+count))->rchild==NULL)
        else if((*(tree+count))->rchild==NULL)
        {
            (*fptr[8])((void**)tree);
            *(tree+(2*count+1))=*tree;
            (*(tree+count))->rchild=*(tree+(2*count+1));
            (*(tree+(2*count+1)))->parent=*(tree+count);
            printf("%s:value at right child of %d : %d\n",__func__,(*(tree+count))->value,(*(tree+(2*count+1)))->value);
            count++;
            idx++;
        }
        //printf("Count inside else :%d\n",count);
    }
    //printf("Count at end :%d\n",count);
    printf("%s:End\n",__FILE__);
    return (void**)tree;
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