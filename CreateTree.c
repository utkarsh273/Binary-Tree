#include "headers.h"
#include "structures.h"
#include "declerations.h"
void** CreateTree()
{
    int h,ndata;
    int i=1;
    Node **Tree;
    printf("Enter the height of Tree\n");
    scanf("%d",&h);
    printf("Enter the Data  of Node\n");
    scanf("%d",&ndata);
    Tree=(Node**)malloc(sizeof(Node)*(2*h-1));
    if(i==1)
    {
        (*(Tree+i))->data=ndata;
    }
    (*(Tree+2*i))->data=ndata;
    (*(Tree+2*i+1))->data=ndata;
    printf("Enter the left node of %d\n",(*(Tree+2*i))->data);

    return Tree;

}