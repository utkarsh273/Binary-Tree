#include "headers.h"
#include "declerations.h"
void** DisplayTree(void **arg)
{
    printf("%s:Begin\n",__FILE__);
    Node **tree;
    int i;
    tree=(Node**)arg;
    i=1;   
    while(i<idx)
    {
        
        if(i>10)
        {
            printf(" %d  ",i);
            i++;
        }
        printf("   %d  ",i);
        i++;
    }
    printf("\n");
    i=1;   
    while(i<idx)
    {
        printf("______");
        i++;
    }
    printf("\n");
    i=1;
    printf("| %d |",(*(tree+i))->value);
    while(i<idx)
    {
        //printf("| %d ",(*(tree+i))->value);
	    if((*(tree+i))->lchild!=NULL||(*(tree+i))->rchild!=NULL)
	    {
        	printf(" %d |",(*(tree+2*i))->value);
        	printf(" %d |",(*(tree+(2*i+1)))->value);
	    }
        i++;
    }
    printf("\n");
    printf("%s:End\n",__FILE__);
    return (void**)tree;
}