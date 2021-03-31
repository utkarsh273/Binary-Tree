#include "headers.h"
#include "declerations.h"
Node **NewNode;
void** allocateNode(void **arg)
{
    printf("%s:Begin\n",__FILE__);
    NewNode=(Node**)arg;
    (*NewNode)=(Node*)malloc(sizeof(Node));
    if(!NewNode)
    {
        perror("malloc");
        (*fptr[0])((void**)&status[1]);
    }
    printf("hello index\n");
    (*NewNode)->index=0;
    printf("hello parent\n");
    (*NewNode)->parent=NULL;
    //printf("hello left child\n");
    (*NewNode)->lchild=NULL;
    //printf("hello right child\n");
    (*NewNode)->rchild=NULL;
    //printf("hello status\n");
    (*NewNode)->status=0;
    //printf("hello value\n");
    (*NewNode)->value=val++;
    printf("%s:End\n",__FILE__);
    return (void**)NewNode;
}