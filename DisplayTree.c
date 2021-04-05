#include "headers.h"
#include "declerations.h"
void** DisplayTree(void **arg)
{
    printf("%s:Begin\n",__FILE__);
    Node **tree;
    int i,j;
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
    i=j=1;
    printf("| %d |",(*(tree+i))->value);
    while(i<idx)
    {
        //printf("| %d ",(*(tree+i))->value);
	    if((*(tree+i))->lchild!=NULL)
	    {
        	printf(" %d |",(*(tree+2*i))->value);
            if((*(tree+j))->rchild!=NULL)
            {
                printf(" %d |",(*(tree+(2*j+1)))->value);
                j++;
            }
        	
	    }
        i++;
    }
    printf("\n");
    printf("%s:End\n",__FILE__);
    return (void**)tree;
}