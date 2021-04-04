#include "headers.h"
#include "declerations.h"
Node *Tree;
void** TraverseTree(void **arg)
{
    printf("%s:Begin\n",__FILE__);
    Node **tree;
    int choice;
    tree=(Node**)arg;
    printf("_____Traverse Options______\n");
    printf("7.PreOrder\n");
    printf("8.PostOrder\n");
    printf("9.Inorder\n");
    printf("Enter your Choice\n");
    scanf("%d",&choice);
    if(choice>=7 && choice<=9)
    {
        GetRootNode();
        (*fptr[choice+2])((void**)Tree);
    }
    printf("\n"); 
    printf("%s:End\n",__FILE__);
    return(void**)tree;
}